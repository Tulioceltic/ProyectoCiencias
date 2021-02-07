#ifndef	Pacientes_h
#define Pacientes_h
#include "PersonalSalud.h"
#include <iostream>
#include <cstdlib>
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
	Lista <Personal> PersonalAsignado;
	
	
};
class Pacientes{
	public:
		Pacientes(){
			
		}
};
#endif /*Pacientes */ 
