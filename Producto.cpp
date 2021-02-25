#include "Producto.h"
using namespace std;

Producto :: Producto(string n, int p){
	nombre = n;
	precio = p;	
}

string Producto::getnombre(){
	return nombre;
}

int Producto::getprecio(){
	return precio;
}


void Producto::mostrarDatos(){
	cout<<"Ingrese nuevo producto: "<<nombre<<endl;
	cout<<"Ingrese el precio: "<<precio<<endl;
	cout<<endl;
}

