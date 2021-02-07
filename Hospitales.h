#ifndef	Hospitales_h
#define Hospitales_h
#include "Listas.h"
#include "PersonalSalud.h"
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
	Lista<Personal> Personal_Hospital;
};

class Hospitales{
    Hospital auxHospitales;
    Lista <Hospital> Listahospitales;
    Hospital auxH;
	public:
		Hospitales(){
		};
		
		void LlenarHospitales();



};


#endif /*Hospitales_h */ 

