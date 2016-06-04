#include "persona.h"
#include <string>
#include <sstream>
#include <ctime>
#include <cstdlib>
using std::stringstream;
using std::string;
persona::persona(string nombre,string genero, string cabello,char* gencabello,string ojos,char* genojos,string piel,char* genpiel,bool fertil){
	this->nombre=nombre;
	this->genero=genero;
	this->cabello=cabello;
	this->gencabello=gencabello;
	this->ojos=ojos;
	this->genojos=genojos;
	this->piel=piel;
	this->genpiel=genpiel;
	this->fertil=fertil;
}
persona::persona(){
	this->nombre="vacio";
}
string persona::toString()const{
	stringstream ss;
	ss<<"Nombre:"<<nombre<<"-"<<genero<<"-Cabello:"<<cabello<<"-Ojos:"<<ojos<<"-Piel:"<<piel<<"-Fertil:"<<fertil;
	return ss.str();
}

const persona operator+(const persona& hombre,const persona& mujer){
	srand(time(NULL));
	string nombre,genero,cabello,ojos,piel;
	char* gencabello=char[2];
	char* genojos=char[2];
	char* genpiel=char[2];
	bool fertil;
	int posible=rand()%100+1;
	if (posible>=1&&posible<=22&&hombre.fertil==true&&mujer.fertil==true){
		if((rand()%100+1)>50){
			genero="mujer";
		}else{
			genero="hombre";
		}
		if(genero=="mujer"){
			nombre="Karla";
		}else{
			nombre="Carlo";
		}
		if((rand()%100+1)<=25){
			gencabello[0]=hombre.gencabello[0];
			gencabello[1]=mujer.gencabello[0];
		}else if (rand()%100+1)>25&&rand()%100+1)<=50)
		{
			gencabello[0]=hombre.gencabello[1];
			gencabello[1]=mujer.gencabello[0];
		}else if (rand()%100+1)>50&&rand()%100+1)<=75)
		{
			gencabello[0]=hombre.gencabello[1];
			gencabello[1]=mujer.gencabello[1];
		}else{
			gencabello[0]=hombre.gencabello[0];
			gencabello[1]=mujer.gencabello[1];
		}
		if((rand()%100+1)<=25){
			genojos[0]=hombre.genojos[0];
			genojos[1]=mujer.genojos[0];
		}else if (rand()%100+1)>25&&rand()%100+1)<=50)
		{
			genojos[0]=hombre.genojos[1];
			genojos[1]=mujer.genojos[0];
		}else if (rand()%100+1)>50&&rand()%100+1)<=75)
		{
			genojos[0]=hombre.genojos[1];
			genojos[1]=mujer.genojos[1];
		}else{
			genojos[0]=hombre.genojos[0];
			genojos[1]=mujer.genojos[1];
		}
		if((rand()%100+1)<=25){
			genpiel[0]=hombre.genpiel[0];
			genpiel[1]=mujer.genpiel[0];
		}else if (rand()%100+1)>25&&rand()%100+1)<=50)
		{
			genpiel[0]=hombre.genpiel[1];
			genpiel[1]=mujer.genpiel[0];
		}else if (rand()%100+1)>50&&rand()%100+1)<=75)
		{
			genpiel[0]=hombre.genpiel[1];
			genpiel[1]=mujer.genpiel[1];
		}else{
			genpiel[0]=hombre.genpiel[0];
			genpiel[1]=mujer.genpiel[1];
		}
		if(gencabello[0]=='A'||gencabello[1]=='A'){
			cabello="oscuro";
		}else if(gencabello[0]!=gencabello[1]){
			if ((rand()%100+1)>50)
			{
				cabello="rubio";
			}else{
				cabello="pelirrojo";
			}
		}else if (gencabello[0]=='a'){
			cabello="rubio";
		}else{
			cabello="pelirrojo";
		}
		if(genojos[0]=='A'||genojos[1]=='A'){
			ojos="oscuros";
		}else if(genojos[0]!=genojos[1]){
			if ((rand()%100+1)>50)
			{
				ojos="verdes";
			}else{
				ojos="azules";
			}
		}else if (genojos[0]=='a'){
			ojos="verdes";
		}else{
			ojos="azules";
		}
		if(genpiel[0]=='A'||genpiel[1]=='A'){
			piel="blanca";
		}else{
			piel="oscura";
		}
		return persona(nombre,genero,cabello,gencabello,ojos,genojos,piel,genpiel,fertil);
	}else{
		return persona();
	}
}
const persona operator*(const persona& hombre,const persona& mujer){
	srand(time(NULL));
	string nombre,genero,cabello,ojos,piel;
	char* gencabello=char[2];
	char* genojos=char[2];
	char* genpiel=char[2];
	bool fertil;
	if((rand()%100+1)<=22&&hombre.fertil==true&&mujer.fertil==true){
		if((rand()%100+1)>50){
			genero="mujer";
		}else{
			genero="hombre";
		}
		if(genero=="mujer"){
			nombre="Karla";
		}else{
			nombre="Carlo";
		}
		if((rand()%100+1)<=25){
			gencabello[0]=hombre.gencabello[0];
			gencabello[1]=mujer.gencabello[0];
		}else if (rand()%100+1)>25&&rand()%100+1)<=50)
		{
			gencabello[0]=hombre.gencabello[1];
			gencabello[1]=mujer.gencabello[0];
		}else if (rand()%100+1)>50&&rand()%100+1)<=75)
		{
			gencabello[0]=hombre.gencabello[1];
			gencabello[1]=mujer.gencabello[1];
		}else{
			gencabello[0]=hombre.gencabello[0];
			gencabello[1]=mujer.gencabello[1];
		}
		if((rand()%100+1)<=25){
			genojos[0]=hombre.genojos[0];
			genojos[1]=mujer.genojos[0];
		}else if (rand()%100+1)>25&&rand()%100+1)<=50)
		{
			genojos[0]=hombre.genojos[1];
			genojos[1]=mujer.genojos[0];
		}else if (rand()%100+1)>50&&rand()%100+1)<=75)
		{
			genojos[0]=hombre.genojos[1];
			genojos[1]=mujer.genojos[1];
		}else{
			genojos[0]=hombre.genojos[0];
			genojos[1]=mujer.genojos[1];
		}
		if((rand()%100+1)<=25){
			genpiel[0]=hombre.genpiel[0];
			genpiel[1]=mujer.genpiel[0];
		}else if (rand()%100+1)>25&&rand()%100+1)<=50)
		{
			genpiel[0]=hombre.genpiel[1];
			genpiel[1]=mujer.genpiel[0];
		}else if (rand()%100+1)>50&&rand()%100+1)<=75)
		{
			genpiel[0]=hombre.genpiel[1];
			genpiel[1]=mujer.genpiel[1];
		}else{
			genpiel[0]=hombre.genpiel[0];
			genpiel[1]=mujer.genpiel[1];
		}
		if(gencabello[0]=='A'||gencabello[1]=='A'){
			cabello="oscuro";
		}else if(gencabello[0]!=gencabello[1]){
			if ((rand()%100+1)>50)
			{
				cabello="rubio";
			}else{
				cabello="pelirrojo";
			}
		}else if (gencabello[0]=='a'){
			cabello="rubio";
		}else{
			cabello="pelirrojo";
		}
		if(genojos[0]=='A'||genojos[1]=='A'){
			ojos="oscuros";
		}else if(genojos[0]!=genojos[1]){
			if ((rand()%100+1)>50)
			{
				ojos="verdes";
			}else{
				ojos="azules";
			}
		}else if (genojos[0]=='a'){
			ojos="verdes";
		}else{
			ojos="azules";
		}
		if(genpiel[0]=='A'||genpiel[1]=='A'){
			piel="blanca";
		}else{
			piel="oscura";
		}
		return persona(nombre,genero,cabello,gencabello,ojos,genojos,piel,genpiel,fertil);
	}else{
		return persona();
	}
}