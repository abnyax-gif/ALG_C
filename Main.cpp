#include <iostream>
#include "CLIENTE.cpp"
using namespace std;

main(){
	string nit,nombres,apellidos,direccion;
	int telefono;
	cout<<"Ingrese Nit:";
	cin>>nit;
	cout<<"Ingrese Nombres:";
	cin>>nombres;
	cout<<"Ingrese Apellidos:",
	cin>>apellidos;
	cout<<"Ingrese Direccion:";
	cin>>direccion;
	cout<<"Ingrese Telefono:";
	cin>>telefono;
	cliente cliente = (nombres,apellidos,direccion,telefono,nit);
	cliente.leer();
}
