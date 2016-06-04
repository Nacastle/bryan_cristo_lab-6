#include <iostream>
#include "persona.h"
#include <vector>
#include <string>
using std::cout;
using std::endl;
using std::cin;
using std::vector;
using std::string;

int main(int argc, char const *argv[])
{
	int resp = 0;
	vector<persona*> lista;
	int opcion;
	int op;
	do {
		cout << "1.Agregar\n2.Elimnar." << endl;
		cin >> op;
		if (op = 1) {
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
			lista.push_back(new persona(nombre, genero, cabello, ojos, piel, fertil));
			cout << "Desea ingresar a otra persona?\n0.Si\n1.No" << endl;
			cin >> resp;
		}else{
			for (int i = 0; i < lista.size(); i++) {
				cout << i << lista[i]->toString() << endl;
			}
			int pos3;
			cout << "Ingrese la posicion que desee eliminar: " << endl;
			cin >> pos3;
			lista.erase(lista.begin()+pos3);
		}
	} while(resp != 1);
	for (int i = 0; i < lista.size(); i++) {
		cout << i << lista[i]->toString() << endl;
	}

	int pos1,pos2;
	cout << "Ingrese la posicion 1 de la persona que desea mezclar ( ͡° ͜ʖ ͡°)" << endl;
	cin >> pos1;
	cout << "Ingrese la posicion 2 de la persona que desea mezclar ( ͡° ͜ʖ ͡°)" << endl;
	cin >> pos2;

	int alteracion;
	cout << "1.Usara condones Durex ( ͡° ͜ʖ ͡°)\n2.Ira a lo YOLO a ver que pasa." << endl;
	cin >> alteracion;

	if (alteracion = 1) {
		(*lista[pos1]) + (*lista[pos2]);
		lista.push_back((*lista[pos1]) + (*lista[pos2]));
	}else{
		(*lista[pos1]) * (*lista[pos2]);
		lista.push_back((*lista[pos1]) * (*lista[pos2]));
	}

	return 0;
}
