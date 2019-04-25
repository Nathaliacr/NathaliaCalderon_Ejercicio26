figura.png :

all: euler.dat rk4.dat leapfrog.dat
	%.dat: NathaliaCalderon_Ejercicio26.x
	./NathaliaCalderon_Ejercicio26.x
NathaliaCalderon_Ejercicio26.x: NathaliaCalderon_Ejercicio26.cpp
	c++ NathaliaCalderon_Ejercicio26.cpp -o NathaliaCalderon_Ejercicio26.x
clean:
	rm -rf *.x *.dat