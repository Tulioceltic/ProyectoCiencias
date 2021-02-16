#ifndef	PersonalSalud_h
#define PersonalSalud_h
#include <iostream>
#include <cstdlib>
#include "Pacientes.h"
using namespace std;
struct Personal{
	string Hospital;
	string Tipo;
	string Seccion;
	string Nombre;
	string Apellido;
	string TipoIdentificacion;
	long int NumeroIdentificacion;
	string Sexo;
	int TelefonoCel;
	int Telefonofij;
	int dia;
	int mes;
	int anio;
	string Correo;
	string Ciudad;
	string Pais;
	string Direccion;
	string Barrio;
	int hora_inicial;
	int hora_final;
	int num_pacientes;
	Lista <Paciente> pacientesPS;
	
	
};
class PersonalSalud{
	int num_pacientes;
	public:
		PersonalSalud(){
		};
	void llenar();
	bool calcularEdad( int anioAct , int mesAct, int fechAct, int anioNac, int mesNac, int fechNac);
	
};
void PersonalSalud::llenar(){
	
}
bool PersonalSalud::calcularEdad( int anioAct , int mesAct, int fechAct, int anioNac, int mesNac, int fechNac)
{
    int respFech , respMes;

    if ( fechAct < fechNac  )
    {   //En caso de ser menor la fecha actual que el nacimiento
        fechAct = fechAct + 30; // Se le suma los 30 días (1 mes) a la fecha actual
        mesAct = mesAct - 1; // Se le resta un mes (30 días) al mes actual
        respFech =  fechAct - fechNac; //Se le resta fecha nacimiento al actual
    }
    else //En caso de ser mayor la fecha actual que el nacimiento
        respFech =  fechAct - fechNac;  //Se le resta fecha nacimiento al actual

    if( mesAct < mesNac )
    {   //En caso de ser menor el mes actual que el nacimiento
        mesAct = mesAct + 12; // Se le suma los 12 meses (1 año) al mes actual
        anioAct = anioAct - 1 ; // Se le resta 1 año ( 12 meses) al año actual
        respMes = mesAct - mesNac; //Se le resta año nacimiento al actual
    }
    else //En caso de ser mayor el mes actual que el nacimiento
        respMes = mesAct - mesNac; //Se le resta año nacimiento al actual
 
    if(anioAct - anioNac>=18)
    	return true;
	else
		return false;
	
}
#endif /*PersonalSalud */ 
