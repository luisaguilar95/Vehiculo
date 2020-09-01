#include"Contenedor.h"


int main() {
	string marca = "  ";
	int nSerie = 0;
	int posVector = 0;


	// Crear contenedor
	Contenedor c(30);

	// Crear elementos a ingresar...
	Vehiculo* vehiculo1 = new Vehiculo("toyota", 2003, 200);
	Vehiculo* vehiculo2 = new Vehiculo("honda", 2000, 201);



	if (c.insertaVehiculo(vehiculo1) == true)
		cout << "Vehiculo insertado correctamente." << endl;

	if (c.insertaVehiculo(vehiculo2) == true)
		cout << "Vehiculo insertado correctamente." << endl << endl;



	cout << "Ordena los vehiculos de menor a mayor segun el modelo." << endl;
	c.ordenaMenorMayorModelo();

	for (int i = 0; i < c.getCantidad(); i++)
	{
		cout << c.toString(i);
	}

	getchar();
	system("cls");




	if (c.modeloAntiguo() == -1) {
		cout << "El contenedor no posee ningun auto." << endl << endl;
	}
	else {
		cout << "La posicion del vehiculo mas antiguo es la: "
			<< c.modeloAntiguo() << endl << endl;
	}
	if (c.modeloReciente() == -1) {
		cout << "El contenedor no posee ningun auto." << endl << endl;
	}
	else {
		cout << "La posicion del vehiculo mas moderno es la: "
			<< c.modeloReciente() << endl << endl;
	}
	getchar();
	system("cls");


	//Invierte el orden de los vehiculos en el contenedor.
	cout << "Invertir orden de vehiculos en el contenedor." << endl;
	c.inverteOrden();

	for (int i = 0; i < c.getCantidad(); i++)
	{
		cout << c.toString(i);
	}

	getchar();
	system("cls");


	//Permita digitar un número de serie y la aplicación te devolverá 
	//la información de ese vehículo en particular
	cout << "Reporte por numero de serie. " << endl;

	do {


		cout << "Ingrese un numero de serie: "; cin >> nSerie; cout << endl;
		if (c.reportePorNumSerie(nSerie) == -1) {

			cout << "Este numero de serie no esta asociado a ninguno de nuestros vehiculos." << endl;
			cout << "Ingrese numero de serie: "; cin >> nSerie; cout << endl;
			posVector = c.reportePorNumSerie(nSerie);
			cout << c.toString(posVector) << endl << endl;
		}
		else {
			posVector = c.reportePorNumSerie(nSerie);
			cout << c.toString(posVector);

		}
	} while (c.reportePorNumSerie(nSerie) == -1);

	getchar();
	getchar();
	system("cls");

	cout << "Numero de vehiculos en la coleccion: " << c.cantidadVehiculos() << endl << endl;

	cout << "Informe de vehiculos por marca" << endl << endl;
	do {
		cout << "Ingrese la marca que desea consultar: "; cin >> marca; cout << endl;
		cout << c.reportePorMarca(marca);
		if (c.poseeMarca(marca) == false) cout << "No poseemos esta marca." << endl;

	} while (c.poseeMarca(marca) == false);




	return 0;
}