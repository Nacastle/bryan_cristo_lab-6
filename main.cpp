#include <iostream>
#include "persona.h"
using std::cout;
using std::endl;
using std::cin;

int main(int argc, char const *argv[])
{
	int resp = 0;
	do {
		string genero, nombre, cabello, ojos, piel, fertilidad;
		bool fertil;
		cout << "Ingrese Genero de la persona: " << endl;
		cin >> genero;
		cout << "Ingrese el Nombre de la persona: " << endl;
		cin >> nombre;
		cout << "Ingrese el color cabello: " << endl;
		cin >> cabello;
		cout << "Ingrese color de ojos: " << endl;
		cin >> ojos;
		cout << "Ingrese color de piel: " << endl;
		cin >> piel;
		cout << "Es fertil?" << endl;
		cin >> fertilidad;
		if (fertilidad == "Si"|| fertilidad == "si") {
			fertil = true;
		}else{
			fertil = false;
		}
		cout << "Desea ingresar a otra persona?\n0.Si\n1.No" << endl;
		cin >> resp;
	} while(resp != 1);
	return 0;
}
