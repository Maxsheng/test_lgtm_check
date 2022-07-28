
main : main.c
	gcc -o $@ $<

all: main

clean:
	rm main