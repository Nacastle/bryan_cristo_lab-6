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
	persona(const persona&);
	virtual ~persona();
	string toString()const;
};

const persona operator+(const persona&,const persona&);
const persona operator*(const persona&,const persona&);
