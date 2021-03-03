#ifndef PRODUCTO_H
#define PRODUCTO_H

#include<string>
#include<iostream>
using namespace std;

class Producto
{	
	private:
		string nombre;
		int precio;
		
	public:
		Producto (string, int);
		string getnombre();
		int getprecio();
		virtual void mostrarDatos();
	
};

#endif
