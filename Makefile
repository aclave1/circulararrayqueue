CC=gcc
CFLAGS= -I.
DEPS = arrayqueue.h
EXENAME=arrayqueue


%.o : %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

arrayqueue: main.o arrayqueue.o
	$(CC) -o $(EXENAME) main.o arrayqueue.o $(CFLAGS)

clean:
	rm -f *.o $(EXENAME)