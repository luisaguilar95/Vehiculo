
#ifndef CONTENEDOR_H
#define CONTENEDOR_H

#include"Vehiculo.h"

class Contenedor {

private:

	Vehiculo** vector; //vector dinamico de objetos dinimicos.                 
	int cantidad;
	int tamano;

public:

	Contenedor(int);
	~Contenedor();
	int getCantidad();
	int getTamano();
	int ordenaMenorMayorModelo();
	int modeloAntiguo();
	int modeloReciente();
	bool inverteOrden();
	string toString(int);
	int reportePorNumSerie(int);
	int cantidadVehiculos();
	bool poseeMarca(string);
	string reportePorMarca(string);
	bool insertaVehiculo(Vehiculo*);
	bool insertaVehiculoPorTeclado(Vehiculo*);


};
#endif // CONTENEDOR

