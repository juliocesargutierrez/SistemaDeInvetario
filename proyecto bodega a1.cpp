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

class proovedor:public facturacion{
	private:
		int ruc;
		int telefono;
		char direccion[20];
	public:
		void registrar();
		void modificar();
		void exportar();
		void mostrar();
};
void proovedor::registrar(){
	cout<<"Codigo del proovedor	: ";cin>>codigo;
	cout<<"Nombre del proovedor	: ";cin>>nombre;
	cout<<"RUC			: ";cin>>ruc;
	cout<<"Telefono		: ";cin>>telefono;
	cout<<"Direccion 		: ";cin>>direccion;
}
void proovedor::mostrar(){
	
		cout<<"	"<<codigo;
		cout<<"\t\t"<<nombre;
		cout<<"\t	"<<ruc;
		cout<<"\t	"<<telefono;
		cout<<"\t	"<<direccion<<endl;
}

void proovedor::exportar(){
	ofstream archivo3;
	archivo3.open("proovedores.txt",ios::app);
	
	archivo3<<"	"<<codigo;
	archivo3<<"\t\t"<<nombre;
	archivo3<<"\t	"<<ruc;
	archivo3<<"\t	"<<telefono;
	archivo3<<"\t	"<<direccion<<endl;
	
	archivo3.close();
}

int main(){
	int op,op2,op3,op4;						 
	int np=0;						
	int nc=0;						
	int npr=0;					
	producto listaprod[20];
	cliente listacli[20];
	proovedor listaproo[20];
	
	do{
		system("CLS");    
		cout<<"\n            =================================================================";
        cout<<"\n                            ||    SISTEMA PARA UNA BODEGA    ||";
        cout<<"\n            =================================================================";
        cout<<"\n                    Bodega de Don Juan";
        cout<<"\n                    Version de Sistema 1.0";
        cout<<"\n                    Empresa creadora del sitema : J y J";
        cout<<"\n\n\n                MENU DE OPCIONES"<<endl;
        cout<<"                   1. Productos"<<endl;
        cout<<"                   2. Clientes"<<endl;
        cout<<"                   3. Proovedores"<<endl;
        cout<<"                   0. Salir"<<endl<<endl;
        cout<<"Selecciones una opcion : "; cin>>op;
        cout<<endl;
        switch(op){
        	case 1:
        		do{
			        system("CLS");   
					 
					cout<<"\n            =================================================================";
			        cout<<"\n                            ||    SISTEMA PARA UNA BODEGA    ||";
			        cout<<"\n            =================================================================";
			        cout<<"\n                    Mi Bodega";
			        cout<<"\n                    Version de Sistema 1.0";
			        cout<<"\n                    Empresa creadora del sitema : J y J";
			        cout<<"\n\n\n                MENU DE OPCIONES"<<endl;
			        cout<<"                   1. Agregar Productos"<<endl;
			        cout<<"                   2. Mostrar Lista de productos"<<endl;
			       	cout<<"                   3. Exportar Lista de productos"<<endl;
			        cout<<"                   0. Salir"<<endl<<endl;
			        cout<<"Selecciones una opcion : "; cin>>op2;	
			        switch(op2){
			        	case 1:
			        		listaprod[np].registrar();
			        		np=np+1;
			        		cout<<endl<<"Registro exitoso!"<<endl;
		        			break;
		        		case 2:
		        			cout<<"\n\t\tLISTA DE PRODUCTOS";
			        		cout<<"\n\n	Codigo		Nombre		Cantidad	Categoria   	Precio	      Proovedor"<<endl;
			        		
			        		for(int i=0; i<np;i++){
			        			listaprod[i].mostrar();
							}
							system("pause");
		        			break;
		        		
		        		case 3:
		        			for(int i=0;i<np;i++){
			        			cout<<i+1;
			        			listaprod[i].exportar();
							}
							cout<<"Se exporto correctamente ";					
			        		system("pause");
		        			break;
		        		case 0:
		        			cout<<"Hasta pronto!"<<endl;
		        			system("pause");
		        			break;
					}
				}
				while(op2 !=0);
				system("pause");
        		break;
        	case 2:
        		do{
			        system("CLS");   
					 
				cout<<"\n            =================================================================";
		        cout<<"\n                            ||    SISTEMA PARA UNA BODEGA    ||";
		        cout<<"\n            =================================================================";
		        cout<<"\n                    Mi Bodega";
		        cout<<"\n                    Version de Sistema 1.0";
		        cout<<"\n                    Empresa creadora del sitema : J y J";
			        cout<<"\n\n\n                MENU DE OPCIONES"<<endl;
			        cout<<"                   1. Agregar clientes"<<endl;
			        cout<<"                   2. Mostrar Lista de clientes"<<endl;
			        cout<<"                   3. Exportar Lista de clientes"<<endl;
			        cout<<"                   0. Salir"<<endl<<endl;
			        cout<<"Selecciones una opcion : "; cin>>op3;
					
					switch(op3){
						case 1:
							listacli[nc].registrar();
        					nc=nc+1;
        					cout<<endl<<"Registro exitoso!"<<endl;
							break;
						case 2:
							cout<<"\n\t\tLISTA DE CLIENTES";
			        		cout<<"\n\n	Codigo		Nombre		Apellido	Dni		Ruc		Telefono"<<endl;
			        		
			        		for(int i=0;i<nc;i++){
			        			listacli[i].mostrar();
							}
							system("pause");
							break;
						case 3:
							for(int i=0;i<nc;i++){
			        			cout<<i+1;
			        			listacli[i].exportar();
							}
							cout<<"Se exporto correctamente ";					
			        		system("pause");
							break;
							
						case 0:
							cout<<"Exitos!"<<endl;
		        			system("pause");
							break;
					}
				}
				while(op3 !=0);
				system("pause");
        		break;
        	case 3:
        		do{
			        system("CLS");   
						 
					cout<<"\n            =================================================================";
			        cout<<"\n                            ||    SISTEMA PARA UNA BODEGA    ||";
			        cout<<"\n            =================================================================";
			        cout<<"\n                    Mi Bodega";
			        cout<<"\n                    Version de Sistema 1.0";
			        cout<<"\n                    Empresa creadora del sitema : J y J";
			        cout<<"\n\n\n                MENU DE OPCIONES"<<endl;
			        cout<<"                   1. Agregar proovedor"<<endl;
			        cout<<"                   2. Mostrar proveedor "<<endl;
			        cout<<"                   3. Exportar Lista de proovedores"<<endl;
				    cout<<"                   0. Salir"<<endl<<endl;
				    cout<<"Selecciones una opcion : "; cin>>op4;
					
					switch(op4){
						case 1:
							listaproo[npr].registrar();
        					npr=npr+1;
        					cout<<endl<<"Registro exitoso!"<<endl;
							break;
						case 2:
							cout<<"\n\t\tLISTA DE PROVEEDORES";
			        		cout<<"\n\nN.	Codigo		Nombre		Ruc		Telefono	Direccion"<<endl;
			        		
			        		for(int i=0;i<npr;i++){
			        			cout<<i+1;
			        			listaproo[i].mostrar();
							}
							system("pause");
							break;
						case 3:
							for(int i=0;i<npr;i++){
        						cout<<i+1;
        						listaproo[i].exportar();
							}
							cout<<"Se exporto correctamente ";					
        					system("pause");
							break;
						case 0:
							cout<<"Exitos!"<<endl;
		        			system("pause");
							break;
					}	
				}
				while(op4 !=0);
				system("pause");
        		break;
        	case 0:
        		cout<<"Hasta pronto!"<<endl;
        		system("pause");
        		break;
		}
	}
	while(op !=0);
 
 return 0;
 	
}
        

