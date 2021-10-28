CC=g++
EXE=main.exe
OBJS=main.o  DutchFlag.o Heap.o Hoare.o MergeSort.o Lomuto.o

$(EXE) : $(OBJS) 
	$(CC) -o $(EXE) $(OBJS) 

%.o : %.cpp
	$(CC) -c -o $@ $< 

clean : 
	rm $(EXE) $(OBJS) 
