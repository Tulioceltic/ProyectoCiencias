#ifndef	Controlador_h
#define Controlador_h
#include "Listas.h"
#include "Hospitales.h"
#include "Consultas.h"
#include "LeerArchivos.h"
#include "PersonalSalud.h"
#include <iostream>
using namespace std;

class Controlador{
	public:
	Hospitales LlenarH;
	Hospital auxH;
	Personal auxPS;
	LeerArchivos leer;
    Consultas consulta;
    Lista <Hospital> Listah;
    Lista <Personal> ListaPS;
		Controlador(){
			Listah=leer.LLenarHospitales(Listah);
			ListaPS=leer.LLenarPersonalSalud(ListaPS);
		};

	void ConsultarHospitales();
	void ConsultarPersonalSalud();
	
};

void Controlador::ConsultarHospitales(){
	// Con esto se imprimen las listas
	for(int j=1;j<=Listah.tamano_lista();j++){
		     	auxH=Listah.obtenerDato(j);
		     	cout<<j<<": ";
		     	cout<<auxH.Nombre<<","<<auxH.Gerente<<","<<auxH.Localidad<<","<<auxH.calle_inicial<<","<<auxH.calle_final<<","<<auxH.carrera_inicial<<","<<auxH.carrera_final<<endl;    
	}	
	cout<<endl;
	consulta.HospitalesCalleCarreras(Listah,22,28,15,17);
	consulta.HospitalesCalleCarreras(Listah,100,100,100,100);

	//LLenarPS.calcularEdad(2020,1,25,2000,11,4);
}
void Controlador::ConsultarPersonalSalud(){
	for(int j=1;j<=ListaPS.tamano_lista();j++){
		     	auxPS=ListaPS.obtenerDato(j);
		     	cout<<j<<": ";
		     	cout<<auxPS.Direccion<<endl;    
	}	
}

#endif /*Controlador */ 
