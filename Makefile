CC=gcc
CFLAGS=-I./include	-std=c99	-w
makeHW2:	process_producer.o	main.o FCFS.o RR.o
	$(CC)	$(CCFLAGS)	-o	producer process_producer.o	main.o	FCFS.o RR.o

clean:
	rm	-f	*.o	makeHW2