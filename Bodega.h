#ifndef BODEGA_H
#define BODEGA_H

#include "Bogeda.h"

using namespace std;

class Bodega
{
	private :
		char nombre[20];
		char direccion[20];
		int telefono;
		char ciudad[20];
		
	public:
		void mostrardatos();
		void registrardatos();
		void cambiardatos();
		
};

#endif
