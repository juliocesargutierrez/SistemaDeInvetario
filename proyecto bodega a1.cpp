#include <iostream>//libreria
#include <fstream>

using namespace std;


class facturacion{ //clase principal
	protected:
		char codigo[20];
		char nombre[20];
	private:
		void registrar();
		void modificar();
		void ordenar();
		void buscar();
		void exportar();
		void mostrar();
	
};
class producto:public facturacion{ // producto hereda de facturación: nombre y codigo//
	private:
		int cantidad;
		char categoria[20];
		float precio;
		char proovedor[20];
	public:
		void registrar();
		void modificar();
		void ordenar();
		void buscar();
		void exportar();
		void mostrar();
};

void producto::registrar(){ //
	cout<<"Codigo del producto	: ";cin>>codigo;
	cout<<"Nombre del producto	: ";cin>>nombre;
	cout<<"Cantidad existente	: ";cin>>cantidad;
	cout<<"Categoria del producto	: ";cin>>categoria;
	cout<<"Precio Unitario	: ";cin>>precio;
	cout<<"Proovedor	: ";cin>>proovedor;
}
void producto::mostrar(){
	
	cout<<"	"<<codigo;
	cout<<"\t\t"<<nombre;
	cout<<"\t	"<<cantidad;
	cout<<"\t	"<<categoria;
	cout<<"\t	"<<precio;
	cout<<"\t	"<<proovedor<<endl;
}
void producto::ordenar(){
	
}
void producto::buscar(){
	
}
void producto::exportar(){
	
	ofstream archivo1;
	archivo1.open("productos.txt");
	
	archivo1<<"	"<<codigo;
	archivo1<<"\t\t"<<nombre;
	archivo1<<"\t	"<<cantidad;
	archivo1<<"\t	"<<categoria;
	archivo1<<"\t	"<<precio;
	archivo1<<"\t	"<<proovedor<<endl;
	
	archivo1.close();
}

class cliente:public facturacion{// hereda nombre y codigo de factracion
	private:
		char apellido[20];
		int dni;
		int ruc;
		int telefono;
	public:
		void registrar();
		void modificar();
		void ordenar();
		void buscar();
		void exportar();
		void mostrar();		
};
void cliente::registrar(){
	cout<<"Codigo del cliente	: ";cin>>codigo;
	cout<<"Nombre del cliente	: ";cin>>nombre;
	cout<<"Apellido		: ";cin>>apellido;
	cout<<"Dni			: ";cin>>dni;
	cout<<"Ruc			: ";cin>>ruc;
	cout<<"Telefono		: ";cin>>telefono;
}
void cliente::mostrar(){

	cout<<"	"<<codigo;
	cout<<"\t\t"<<nombre;
	cout<<"\t	"<<apellido;
	cout<<"\t	"<<dni;
	cout<<"\t	"<<ruc;
	cout<<"\t	"<<telefono<<endl;
}
