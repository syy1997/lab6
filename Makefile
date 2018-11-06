C=gcc
CFLAGS=-lWarn -pedantic

output:tempsensor.o libmyifttt.a
	$(CC) tempsensor.o -L. -lwiringPi -lmyifttt -lcurl -o irtester

tempsensor.o:tempsensor.c
	$(CC) $(CFLAGS) -c -ansi $<


tester:tester.o libmyifttt.a
	$(CC) tester.o -L. -lmyifttt -lcurl -o tester

libmyifttt.a:ifttt.o
	ar -rcs libmyifttt.a ifttt.o

tempsensor:tempsensor.o
	cc irtester.o -lwiringPi -o irtester
        
ifttt.o: 	ifttt.c 
	$(CC) $(CFLAGS) -c -ansi $<       
        
tester.o:tester.c ifttt.h
	$(CC) $(CFLAGS) -c -ansi $<

clean:rm tester *.o

all:tester output

