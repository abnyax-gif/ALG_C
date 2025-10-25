#include <iostream>
#include "Persona.cpp"
using namespace std;
class Cliente : public Persona{
	//atributos
	private:
	string nit;
	public :
	// constructores
	cliente(){}
	// constructor heredado
	Cliente(string nom,string ape,string dir,int tel,string n) : Persona(nom,ape,dir,tel){
		nit = n;
	}
	
	void leer(){
		cout<<"nit:"<<nit<<endl;
		cout<<"Nombre: "<<nombres<<endl;
		cout<<"Apellidos: "<<apellidos<<endl;
		cout<<"Direccion:"<<direccion<<endl;
		cout<<"Telefono: "<<telefono<<endl;
	}
};
