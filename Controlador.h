#ifndef	Controlador_h
#define Controlador_h
#include "Listas.h"
#include "Hospitales.h"
#include "Consultas.h"
#include "LeerArchivos.h"
#include <iostream>
class Controlador{
	public:
	Hospitales LlenarH;
	Hospital auxH;
	LeerArchivos leer;
    Consultas consulta;
    
    Lista <Hospital> Listah;
		Controlador(){
			Listah=leer.LLenarHospitales();
			
		};

	void ConsultarHospitales();
	
	
};

void Controlador::ConsultarHospitales(){
	// Con esto se imprimen las listas
	for(int j=1;j<=10;j++){
		     	auxH=Listah.obtenerDato(j);
		     	cout<<j<<": ";
		     	cout<<auxH.Nombre<<","<<auxH.Gerente<<","<<auxH.Localidad<<","<<auxH.calle_inicial<<","<<auxH.calle_final<<","<<auxH.carrera_inicial<<","<<auxH.carrera_final<<endl;
		     
		     
	}	
	cout<<endl;
	consulta.HospitalesCalleCarreras(Listah,22,28,15,17);
	consulta.HospitalesCalleCarreras(Listah,100,100,100,100);
}

#endif /*Controlador */ 
