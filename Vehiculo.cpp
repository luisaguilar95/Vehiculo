#include"Vehiculo.h"


Vehiculo::Vehiculo() {
	this->marca = "   ";
	this->modelo = 0;
	this->numSerie = 0;

};

Vehiculo::Vehiculo(string _marca, int _modelo, int _numSerie) {
	this->marca = _marca;
	this->modelo = _modelo;
	this->numSerie = _numSerie;

};

Vehiculo::~Vehiculo() {
	cout << "Se destruyo un vehiculo." << endl;

};

string Vehiculo::getMarca() {
	return marca;
};

int Vehiculo::getModelo() {
	return modelo;
};

int Vehiculo::getNumSerie() {
	return numSerie;
};

void Vehiculo::setMarca(string _marca) {
	marca = _marca;
};

void Vehiculo::setModelo(int _modelo) {
	modelo = _modelo;
};

void Vehiculo::setNumSerie(int _numSerie) {
	numSerie = _numSerie;
};

string Vehiculo::toString() {
	stringstream s;
	s << "************************************" << endl;
	s << "Marca: " << marca << endl;
	s << "Modelo: " << modelo << endl;
	s << "Numero de serie: " << numSerie << endl;
	s << "************************************" << endl << endl;


	return s.str();
};