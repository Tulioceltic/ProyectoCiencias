#ifndef	Hospitales_h
#define Hospitales_h
#include "Listas.h"
#include <cstdlib>
#include <iostream>
using namespace std;

struct Hospital{
	
	string Nombre;
	string Gerente;
	string Localidad;
	int calle_inicial; 
	int calle_final;
	int carrera_inicial; 
	int carrera_final;
	int Numero_Medicos; 
	int Numero_Enfermeros;
	
};

class Hospitales{
    Hospital auxHospitales;
    Lista <Hospital> Listahospitales;
    Hospital auxH;
	public:
		Hospitales(){
		};
		
		void LlenarHospitales();
    //	string getNombre();
    //	string getGerente();
    //	string getLocalidad();

};
/*void Hospitales::LlenarHospitales(){

     for(int j=1;j<=10;j++){
     	auxHospitales=Listahospitales.obtenerDato(j);
     	cout<<j<<": ";
     	cout<<auxHospitales.Nombre<<" : "<<auxHospitales.calle_inicial<<": "<<auxHospitales.Gerente<<": "<<auxHospitales.carrera_final<<": "<<auxHospitales.calle_final<<": "<<auxHospitales.Localidad<<endl;
     
     
   	}
   	cout<<Listahospitales.lista_vacia()<<endl;
}*/



	

#endif /*Hospitales_h */ 

