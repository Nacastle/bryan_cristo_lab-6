#include "persona.h"
#include <string>
#include <stringstream>
#include <ctime>
#include <cstdlib>
using std::stringstream;
using std::string;
persona::persona(string nombre,string genero, string cabello,string ojos,string piel,bool fertil){
	this->nombre=nombre;
	this->genero=genero;
	this->cabello=cabello;
	this->ojos=ojos;
	this->piel=piel;
	this->fertil=fertil;
}
persona::persona(const Person& other)nombre(other.nombre),genero(other.genero),cabello(other.cabello),ojos(other.ojos),piel(other.piel),fertil(other.fertil){
}
virtual persona::~persona(){
}
	string persona::toString()const{
	stringstream ss;
	ss<<"Nombre:"<<nombre<<"-"<<genero<<"-Cabello:"<<cabello<<"-Ojos:"<<ojos<<"-Piel:"<<piel<<"-Fertil:"<<fertil;
	return ss.str();
}

friend const persona operator+(const persona& hombre,const persona& mujer){


}
friend const persona operator*(const persona& hombre,const persona& mujer){
	if(){
		
	}
}