#include <iostream>
using namespace std;
class Persona{
	// atributos de la classe (caracteristicas de objetos)
	protected : string nombres,apellidos,direccion;
				int telefono;
	
	//constructor : enviar parametros a la clase
	protected :
			persona(){} //constructor vacio, (recibe ningun parametro)
	//contructor con todo los parametros (atributos)
	
	persona(string nom,string ape,string dir,int tel){
		nombres = nom;
		apellidos = ape;
		direccion = dir;
		telefono = tel;
	}
	// 4) metodos (accion que realiza el objeto)
	void leer();
	void crear();
	void actualiazar();
	void borrar();
};
