#ifndef	Pacientes_h
#define Pacientes_h
#include <iostream>
#include <cstdlib>
#include "Listas.h"
struct Paciente{
	string Nombre;
	string Apellido;
	long int NumeroIdentificacion;
	string sexo;
	int dia;
	int mes;
	int anio;
	string Enfermedades;
	string Localidad;
	string Estado;
	string NivelGravedad;
	string Medicamentos;
	Lista <long int> idPersonal;
	
	
};
class Pacientes{
	public:
		Pacientes(){
			
		}
};
#endif /*Pacientes */ 
