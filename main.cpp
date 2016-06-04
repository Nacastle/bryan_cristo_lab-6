#include <iostream>
#include "persona.h"
#include <vector>
#include <string>
#include <cstring>
using std::cout;
using std::endl;
using std::cin;
using std::vector;
using std::string;

int main(int argc, char const *argv[])
{
	int resp = 0;
	vector<persona*> lista;
	int salida;
	int opcion;
	int op;
	do {
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
				char* gencabello = new char[2];
				if (cabello == "oscuro") {
					gencabello[0] = 'A';
					gencabello[1] = 'A';
				}else if (cabello == "rubio") {
					gencabello[0] = 'a';
					gencabello[1] = 'a';
				}else{
					gencabello[0] = 'b';
					gencabello[1] = 'b';
				}

				cout << "Ingrese color de ojos: " << endl;
				cin >> ojos;
				char* genojos = new char[2];
				if (ojos == "oscuros") {
					genojos[0] = 'A';
					genojos[1] = 'A';
				}else if (ojos == "verdes") {
					genojos[0] = 'a';
					genojos[1] = 'a';
				}else{
					genojos[0] = 'b';
					genojos[1] = 'b';
				}

				cout << "Ingrese color de piel: " << endl;
				cin >> piel;
				char* genpiel = new char[2];
				if (piel == "blanca") {
					genpiel[0] = 'A';
					genpiel[1] = 'A';
				}else{
					genpiel[0] = 'a';
					genpiel[1] = 'a';
				}

				cout << "Es fertil?" << endl;
				cin >> fertilidad;
				if (fertilidad == "Si"|| fertilidad == "si") {
					fertil = true;
				}else{
					fertil = false;
				}
				lista.push_back(new persona(nombre, genero, cabello, gencabello, ojos, genojos, piel, genpiel, fertil));
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
			cout << i << ". " << lista[i]->toString() << endl;
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
			(*lista[pos1]) * (*lista[pos2]);
			lista.push_back((*lista[pos1]) * (*lista[pos2]));
		}else{
			(*lista[pos1]) + (*lista[pos2]);
			lista.push_back((*lista[pos1]) + (*lista[pos2]));
		}
		for (int i = 0; i < lista.size(); i++) {
			cout << i << ". " << lista[i]->toString() << endl;
		}
		cout << endl;
		cout << "Desea volver a ingresar?\n0.Si.\n1.No." << endl;
		cin >> salida;
	} while(salida != 1);

	return 0;
}
