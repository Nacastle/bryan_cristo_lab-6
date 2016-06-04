#pragma once
#include <string>
#include <cstring>
using std::string;

class persona{
public:
	string nombre;
 	string genero;
  	string cabello;
  	char* gencabello;
	string ojos;
	char* genojos;
  	string piel;
  	char* genpiel;
  	bool fertil;
	persona(string, string, string, char*, string,char*,string,char*,bool);
	persona();
	string getGenero();
	string toString()const;
};

persona* operator+(const persona&,const persona&);
persona* operator*(const persona&,const persona&);
