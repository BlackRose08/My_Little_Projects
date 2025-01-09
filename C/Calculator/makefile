all: main

clean: main main.o somma.o differenza.o moltiplicazione.o divisione.o potenze.o radice_quadrata.o
	rm -rf main main.o somma.o differenza.o moltiplicazione.o divisione.o potenze.o radice_quadrata.o

main: main.o somma.o differenza.o moltiplicazione.o divisione.o potenze.o radice_quadrata.o
	gcc -o main main.o somma.o differenza.o moltiplicazione.o divisione.o potenze.o -lm radice_quadrata.o -lm 

main.o: main.c somma.h
	gcc -c -o main.o main.c

somma.o: somma.c somma.h trace.h
	gcc -c -o somma.o somma.c

differenza.o: differenza.c differenza.h trace.h
	gcc -c -o differenza.o differenza.c

moltiplicazione.o: moltiplicazione.c moltiplicazione.h trace.h
	gcc -c -o moltiplicazione.o moltiplicazione.c

divisione.o: divisione.c divisione.h trace.h
	gcc -c -o divisione.o divisione.c

potenze.o: potenze.c potenze.h trace.h
	gcc -c -o potenze.o potenze.c

radice_quadrata.o: radice_quadrata.c radice_quadrata.h trace.h
	gcc -c -o radice_quadrata.o radice_quadrata.c