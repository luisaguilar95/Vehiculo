#include"Contenedor.h"

Contenedor::Contenedor(int _tamano) {
	this->tamano = _tamano;
	this->cantidad = 0;
	vector = new Vehiculo * [tamano];
	for (int i = 0; i < tamano; i++)
		vector[i] = NULL;
}

Contenedor::~Contenedor()
{
	for (int i = 0; i < cantidad; i++)
		delete vector[i];
	cantidad = 0;
}

int Contenedor::getCantidad() {
	return cantidad;
};
int Contenedor::getTamano() {
	return tamano;
};

int Contenedor::ordenaMenorMayorModelo()
{
	int i, j;
	Vehiculo* pVehiculo;

	if (cantidad == 0) { return -1; };


	for (i = cantidad - 1; i > 0; i--)
		for (j = 0; j < i; j++)
			if (vector[j]->getModelo() > vector[j + 1]->getModelo()) {
				pVehiculo = vector[j];
				vector[j] = vector[j + 1];
				vector[j + 1] = pVehiculo;

			}
	return 0;
}

int Contenedor::modeloAntiguo()
{
	if (cantidad == 0) return -1;

	ordenaMenorMayorModelo();
	return 1;
}

int Contenedor::modeloReciente()
{
	if (cantidad == 0) return -1;

	ordenaMenorMayorModelo();
	return cantidad;

}

bool Contenedor::inverteOrden()
{
	int i, j;
	Vehiculo* pVehiculo;
	if (cantidad == 0) { return false; }

	for (i = cantidad - 1; i > 0; i--)
		for (j = 0; j < i; j++)
			if (vector[j]->getModelo() < vector[j + 1]->getModelo()) {
				pVehiculo = vector[j];
				vector[j] = vector[j + 1];
				vector[j + 1] = pVehiculo;

			}


	return true;

}

string Contenedor::toString(int i)
{
	stringstream s;

	s << vector[i]->toString() << endl << endl;



	return s.str();
}

int Contenedor::reportePorNumSerie(int _numSerie)
{

	for (int i = 0; i < cantidad; i++) {
		if (vector[i]->getNumSerie() == _numSerie)  return i;
	}
	return -1;
}

int Contenedor::cantidadVehiculos()
{
	return cantidad;
}

bool Contenedor::poseeMarca(string _marca)
{
	for (int i = 0; i < cantidad; i++) {
		if (_marca == vector[i]->getMarca())
			return true;
	};

	return false;
}

string Contenedor::reportePorMarca(string _marca)
{
	stringstream s;

	for (int i = 0; i < cantidad; i++) {
		if (_marca == vector[i]->getMarca())
			s << vector[i]->toString() << endl;
	}

	return s.str();
}

bool Contenedor::insertaVehiculo(Vehiculo* _vehiculo)
{
	vector[cantidad] = _vehiculo;
	cantidad++;
	tamano++;

	return true;
}


bool Contenedor::insertaVehiculoPorTeclado(Vehiculo* _vehiculo) {

	ordenaMenorMayorModelo();
	insertaVehiculo(_vehiculo);
	ordenaMenorMayorModelo();

	return true;
}


