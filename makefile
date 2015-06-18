main:main.o 
main.o: main.c mdd5.h
	gcc  --std=gnu99 -Wall  -g  -c $<
clean:
	rm main *.o
