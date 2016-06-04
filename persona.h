#pragma once
#include <string>
using std::string;

class persona{
public:
	string nombre;
 	string genero;
  	string cabello;
  	char* gencabello=char[2];
	string ojos;
	char* genojos=char[2];
  	string piel;
  	char* genpiel=char[2];
  	bool fertil;
	persona(string, string, string, char*, string,char*,string,char*,bool);
	persona();
	string toString()const;
};

const persona operator+(const persona&,const persona&);
const persona operator*(const persona&,const persona&);
