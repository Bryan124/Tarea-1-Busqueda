// TareaDeBusquedas.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
int main()
{
	int* arreglo;
	int opcion;
	int valor;
	int  num;
	cout << "Ingrese el tamano de la lista: ";
	cin >> num;
	arreglo = new int[num];
	int inc = 0;
	int fin = num;
	int pivot = (inc + fin) / 2;

	for (int i = 0; i <= num; i++) {
		arreglo[i] = i;
	}

	do {
		cout << "\n***** BUSQUEDAS *****" << "\nIngrese el numero que desea buscar" << endl;
		cin >> valor;
		cout << "1.Busqueda Secuencial" << "\n2.Busqueda Binaria" << "\n3.Salir" << endl;
		cin >> opcion;
		switch (opcion) {
		case 1:
			cout << "***** Busqueda Secuencial *****" << endl;
			for (int i = 0; i <= num; i++) {
				if (valor == arreglo[i]) {
					cout << "El numero: " << valor << "\nSe encuentra en la posicion: " << arreglo[i] << endl;
					break;
				}
				else if (i == num && valor != arreglo[i]) {
					cout << "El numero: " << valor << " no esta en la lista!" << endl;
				}
			}
			break;

		case 2:
			if (valor == pivot) {
				cout << "El numero: " << valor << "\nSe encuentra en la posicion: " << pivot << endl;
			}
			else if (valor > pivot) {
				for (int x = pivot; x < fin; x++) {
					if (arreglo[x] == valor) {
						cout << "El numero: " << valor << "\nSe encuentra en la posicion: " << arreglo[x] << endl;
					}
				}
			}
			else if (valor < pivot) {
				for (int x = inc; x < pivot; x++) {
					if (arreglo[x] == valor) {
						cout << "El numero: " << valor << "\nSe encuentra en la posicion: " << arreglo[x] << endl;
					}
				}
			}
			if (valor > num) {
				cout << "El numero: " << valor << " no esta en la lista!" << endl;
			}
			break;
		}
	} while (opcion != 3);

	system("pause");
    return 0;
}

