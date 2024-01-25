CC = gcc
FLAGS = -Wall -g
OBJECTS_MAIN = main.o

all: loops recursives recursived loopd mains maindloop maindrec

mains: $(OBJECTS_MAIN) libclassrec.a
	$(CC) $(FLAGS) -o mains $(OBJECTS_MAIN) libclassrec.a


maindloop: $(OBJECTS_MAIN)
	$(CC) $(FLAGS) -o maindloop $(OBJECTS_MAIN) ./libclassloops.so

maindrec: $(OBJECTS_MAIN)
	$(CC) $(FLAGS) -o maindrec $(OBJECTS_MAIN)  ./libclassrec.so

main.o: main.c NumClass.h
	$(CC) $(FLAGS) -c main.c -o main.o

advancedClassificationLoop.o: advancedClassificationLoop.c NumClass.h
	$(CC) $(FLAGS) -c advancedClassificationLoop.c -o advancedClassificationLoop.o

advancedClassificationRecursion.o: advancedClassificationRecursion.c NumClass.h
	$(CC) $(FLAGS) -c advancedClassificationRecursion.c -o advancedClassificationRecursion.o

basicClassification.o: basicClassification.c NumClass.h
	$(CC) $(FLAGS) -c basicClassification.c -o basicClassification.o

loops: libclassloops.a

libclassloops.a: advancedClassificationLoop.o basicClassification.o
	ar -rcs libclassloops.a advancedClassificationLoop.o basicClassification.o
	
recursives: libclassrec.a

libclassrec.a: advancedClassificationRecursion.o basicClassification.o
	ar -rcs libclassrec.a advancedClassificationRecursion.o basicClassification.o
	
recursived: libclassrec.so 

libclassrec.so: advancedClassificationRecursion.o basicClassification.o
	$(CC) -fPIC -c advancedClassificationRecursion.c basicClassification.c 
	$(CC) -shared -o libclassrec.so advancedClassificationRecursion.o basicClassification.o 

loopd: libclassloops.so

libclassloops.so: advancedClassificationLoop.o basicClassification.o
	$(CC) -fPIC -c advancedClassificationLoop.c basicClassification.c
	$(CC) -shared -o libclassloops.so advancedClassificationLoop.o basicClassification.o 


clean:
	rm -f *.o *.a *.so mains maindloop maindrec
