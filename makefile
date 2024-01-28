CC = gcc
AR = ar
FLAGS = -Wall -g
OBJECTS_MAIN = main.o
OBJECTS_LIB_REC = advancedClassificationRecursion.o basicClassification.o 
OBJECTS_LIB_LOOP = advancedClassificationLoop.o basicClassification.o 

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
	$(CC) $(FLAGS) -c -fPIC advancedClassificationLoop.c -o advancedClassificationLoop.o

advancedClassificationRecursion.o: advancedClassificationRecursion.c NumClass.h
	$(CC) $(FLAGS) -c -fPIC advancedClassificationRecursion.c -o advancedClassificationRecursion.o

basicClassification.o: basicClassification.c NumClass.h
	$(CC) $(FLAGS) -c -fPIC basicClassification.c -o basicClassification.o


libclassloops.a : $(OBJECTS_LIB_LOOP)
	$(AR) -rcs libclassloops.a $(OBJECTS_LIB_LOOP)
	

libclassrec.a: $(OBJECTS_LIB_REC)
	$(AR) -rcs libclassrec.a $(OBJECTS_LIB_REC)

libclassrec.so: $(OBJECTS_LIB_REC)
	$(CC) -shared -o libclassrec.so $(OBJECTS_LIB_REC)

libclassloops.so: $(OBJECTS_LIB_LOOP)
	$(CC) -shared -o libclassloops.so $(OBJECTS_LIB_LOOP)

recursives: libclassrec.a

recursived: libclassrec.so

loopd: libclassloops.so

loops: libclassloops.a

clean:
	rm -f *.o *.a *.so mains maindloop maindrec
