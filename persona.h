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
  	persona(const Person&);
 	public:
	persona(string, string, string, string, string, bool);
<<<<<<< HEAD
	persona(const persona&);
=======
>>>>>>> fd867a6694aa9b9075b52bbf4fee839b2451d168
	virtual ~persona();
	string toString()const;
};

const persona operator+(const persona&,const persona&);
const persona operator*(const persona&,const persona&);
