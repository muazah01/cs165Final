all: lcmain.o isupper.o
		
		cc -o lcmain lcmain.o isupper.o

lcmain.o: lcmain.c isupper.h
		
		cc -c lcmain.c

isupper.o: isupper.c isupper.h
		
		cc -c isupper.c

clean:

		rm *.o
		rm lcmain
