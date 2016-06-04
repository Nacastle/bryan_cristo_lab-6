#pragma once
#include <string>
using std::string;

class persona{
	string nombre;
 	string genero;
  	string cabello;
	string ojos;
  	string piel;
  	bool fertil;
 	public:
	persona(string, string, string, string, string, bool);
	persona(const Person&);
	virtual ~persona();
	string toString()const;	
};

friend const persona operator+(const persona&,const persona&);
friend const persona operator*(const persona&,const persona&);

