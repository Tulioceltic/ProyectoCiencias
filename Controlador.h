#ifndef	Controlador_h
#define Controlador_h
#include "Listas.h"
#include "Hospitales.h"
#include "Consultas.h"
#include "LeerArchivos.h"
#include "PersonalSalud.h"
#include "Pacientes.h"
#include "EscribirArchivos.h"
#include <iostream>
using namespace std;

class Controlador{
	public:
	Hospitales LlenarH;
	Hospital auxH;
	Personal auxPS;
	Paciente auxPa;
	LeerArchivos leer;
	EscribirArchivos Escribir;
    Consultas consulta;
    Lista <Hospital> Listah;
    Lista <Personal> ListaPS;
    Lista <Paciente> ListaPa; 
		Controlador(){
			Listah=leer.LLenarHospitales(Listah);
			ListaPS=leer.LLenarPersonalSalud(ListaPS);
			ListaPa=leer.LLenarPacientes(ListaPa);
		};
	void AdicionarHospital(string ,string ,string ,int , int ,int , int ,int , int);
	void AdicionarPersonal(string,string, string, string, string, string ,long int,string,int ,int,int,int,int,string ,string,string ,string ,string ,int,int,int);
	void AdicionarPaciente(string ,string ,long int ,string ,int ,int ,int ,string ,string ,string ,string ,string );
	void ConsultarHospitales();
	void ConsultarPersonalSalud();
	void ConsultarPacientes();
	
};

void Controlador::ConsultarHospitales(){
	// Con esto se imprimen las listas
	for(int j=1;j<=Listah.tamano_lista();j++){
		     	auxH=Listah.obtenerDato(j);
		     	cout<<j<<": ";
		     	cout<<auxH.Nombre<<","<<auxH.Gerente<<","<<auxH.Localidad<<","<<auxH.calle_inicial<<","<<auxH.calle_final<<","<<auxH.carrera_inicial<<","<<auxH.carrera_final<<","<<auxH.Numero_Medicos<<","<<auxH.Numero_Enfermeros<<endl;    
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
		     	cout<<auxPS.Direccion<<","<<auxPS.Tipo<<endl;    
	}	
}
void Controlador::ConsultarPacientes(){
	for(int j=1;j<=ListaPa.tamano_lista();j++){
		     	auxPa=ListaPa.obtenerDato(j);
		     	cout<<j<<": ";
		     	cout<<auxPa.Medicamentos<<endl;    
	}
}
void Controlador::AdicionarHospital(string Nombre,string Gerente,string Localidad,int calle_inicial, int calle_final,int carrera_inicial, int carrera_final,int Numero_Medicos, int Numero_Enfermeros){
	auxH.Nombre=Nombre;
	auxH.Gerente=Gerente;
	auxH.Localidad=Localidad;
	auxH.calle_inicial=calle_inicial;
	auxH.calle_final=calle_final;
	auxH.carrera_inicial=carrera_inicial;
	auxH.carrera_final=carrera_final;
	auxH.Numero_Medicos=0;
	auxH.Numero_Enfermeros=0;
	Listah.insertar_final(auxH);
	Escribir.ModificarArchivoHospital(Listah);
}
void Controlador::AdicionarPersonal(string Hospital,string Tipo,string Seccion,string Nombre,string Apellido,string TipoIdentificacion,long int NumeroIdentificacion,string Sexo,int TelefonoCel,int Telefonofij,int dia,int mes,int anio,string Correo,string Ciudad,string Pais,string Direccion,string Barrio,int hora_inicial,int hora_final,int num_pacientes){
	auxPS.Hospital=Hospital;
	auxPS.Tipo=Tipo;
	auxPS.Seccion=Seccion;
	auxPS.Nombre=Nombre;
	auxPS.Apellido=Apellido;
	auxPS.TipoIdentificacion=TipoIdentificacion;
	auxPS.NumeroIdentificacion=NumeroIdentificacion;
	auxPS.Sexo=Sexo;
	auxPS.TelefonoCel=TelefonoCel;
	auxPS.Telefonofij=Telefonofij;
	auxPS.dia=dia;
	auxPS.mes=mes;
	auxPS.anio=anio;
	auxPS.Correo=Correo;
	auxPS.Ciudad=Ciudad;
	auxPS.Pais=Pais;
	auxPS.Direccion=Direccion;
	auxPS.Barrio=Barrio;
	auxPS.hora_inicial=hora_inicial;
	auxPS.hora_final=hora_final;
	auxPS.num_pacientes=num_pacientes;
	ListaPS.insertar_final(auxPS);
}
void Controlador::AdicionarPaciente(string Nombre,string Apellido,long int NumeroIdentificacion,string sexo,int dia,int mes,int anio,string Enfermedades,string Localidad,string Estado,string NivelGravedad,string Medicamentos){
	auxPa.Nombre=Nombre;
	auxPa.Apellido=Apellido;
	auxPa.NumeroIdentificacion=NumeroIdentificacion;
	auxPa.sexo=sexo;
	auxPa.dia=dia;
	auxPa.mes=mes;
	auxPa.anio=anio;
	auxPa.Localidad=Localidad;
	auxPa.Estado=Estado;
	auxPa.NivelGravedad=NivelGravedad;
	auxPa.Medicamentos=Medicamentos;
	ListaPa.insertar_final(auxPa);
}
#endif /*Controlador */ 
