
#ifndef VEHICULO_H
#define VEHICULO_H

#include <iostream>
#include <sstream>
#include <string>


using namespace std;

class Vehiculo {

private:

	string marca;
	int modelo;
	int numSerie;

public:

	Vehiculo();
	Vehiculo(string, int, int);
	~Vehiculo();

	string getMarca();
	int getModelo();
	int getNumSerie();
	void setMarca(string);
	void setModelo(int);
	void setNumSerie(int);
	string toString();


};
#endif /* LIBRO_H */
