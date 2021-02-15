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
#include <conio.h>
#include <cstring>
using namespace std;

class Controlador{
	private :
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
	public:
		 
		Controlador(){
			ListaPS=leer.LLenarPersonalSalud(ListaPS);
			Listah=leer.LLenarHospitales(Listah);
			ListaPa=leer.LLenarPacientes(ListaPa);
		};
	void AdicionarHospital(string ,string ,string ,int , int ,int , int ,int , int);
	void AdicionarPersonal(string,string, string, string, string, string ,long int,string,int ,int,int,int,int,string ,string,string ,string ,string ,int,int,int);
	void AdicionarPaciente(string ,string ,long int ,string ,int ,int ,int ,string ,string ,string ,string ,string, int, string );
	void Hospital_Personal();
	void RecuperarPacientes();
	Paciente Personal_Paciente(Paciente,int,string);
	void ConsultarHospitales();
	void ConsultarPersonalSalud();
	void ConsultarPacientes();


	
};

void Controlador::ConsultarHospitales(){
	// Con esto se imprimen las listas
/*	for(int j=1;j<=Listah.tamano_lista();j++){
		     	auxH=Listah.obtenerDato(j);
		     	cout<<j<<": ";
		     	cout<<auxH.Nombre<<","<<auxH.Gerente<<","<<auxH.Localidad<<","<<auxH.calle_inicial<<","<<auxH.calle_final<<","<<auxH.carrera_inicial<<","<<auxH.carrera_final<<","<<auxH.Numero_Medicos<<","<<auxH.Numero_Enfermeros<<endl;    
	}	*/
	cout<<endl;
	consulta.HospitalesCalleCarreras(Listah,22,28,15,17);
	consulta.HospitalesCalleCarreras(Listah,100,100,100,100);

	//LLenarPS.calcularEdad(2020,1,25,2000,11,4);
}
void Controlador::ConsultarPersonalSalud(){
	for(int j=1;j<=ListaPS.tamano_lista();j++){
		     	auxPS=ListaPS.obtenerDato(j);
		     	cout<<j<<": ";
		     	cout<<auxPS.Nombre<<","<<auxPS.Tipo<<","<<auxPS.Hospital<<","<<auxPS.Direccion<<","<<auxPS.num_pacientes<<endl;    
		     	for(int i=1;i<=auxPS.pacientesPS.tamano_lista();i++){
		     		auxPa=auxPS.pacientesPS.obtenerDato(i);
		     		cout<<"Paciente "<<i<<": "<<auxPa.Nombre<<endl;
				 }
	}	
	cout<<endl;
}
void Controlador::ConsultarPacientes(){
	for(int j=1;j<=ListaPa.tamano_lista();j++){
		     	auxPa=ListaPa.obtenerDato(j);
		     	cout<<j<<": ";
		     	cout<<"Paciente :"<<auxPa.Nombre<<","<<auxPa.Apellido<<","<<auxPa.NumeroIdentificacion<<","<<auxPa.Medicamentos<<",";
				for(int i=1;i<=auxPa.idPersonal.tamano_lista();i++)   {
					cout<<auxPa.idPersonal.obtenerDato(i);
					if(i!=auxPa.idPersonal.tamano_lista()){
						cout<<",";
					}
				}
				cout<<endl;
	} 
	cout<<endl;
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
void Controlador::AdicionarPaciente(string Nombre,string Apellido,long int NumeroIdentificacion,string sexo,int dia,int mes,int anio,string Enfermedades,string Localidad,string Estado,string NivelGravedad,string Medicamentos, int hora, string Hospital){
	auxPa.Nombre=Nombre;
	auxPa.Apellido=Apellido;
	auxPa.NumeroIdentificacion=NumeroIdentificacion;
	auxPa.sexo=sexo;
	auxPa.dia=dia;
	auxPa.mes=mes;
	auxPa.anio=anio;
	auxPa.Enfermedades=Enfermedades;
	auxPa.Localidad=Localidad;
	auxPa.Estado=Estado;
	auxPa.NivelGravedad=NivelGravedad;
	auxPa.Medicamentos=Medicamentos;
	auxPa=Personal_Paciente(auxPa,hora,Hospital);
	for(int k=1;k<=auxPa.idPersonal.tamano_lista();k++){
		cout<<auxPa.idPersonal.obtenerDato(k)<<endl;
	}
//	
	if((auxPa.NivelGravedad=="Leve" && auxPa.idPersonal.tamano_lista()==2) || (auxPa.NivelGravedad=="Moderado" && auxPa.idPersonal.tamano_lista()==3) || (auxPa.NivelGravedad=="Severo" && auxPa.idPersonal.tamano_lista()==4)){
		ListaPa.insertar_final(auxPa);
	}else{
		cout<<"Lo siento no tenemos personal sufieciente para atenderlo. Debe esperar a que se desocupe personal"<<endl;
		
	}
	Escribir.ModificarArchivoPaciente(ListaPa);


}
void Controlador::Hospital_Personal(){
	for(int j=1;j<=Listah.tamano_lista();j++){
		auxH=Listah.obtenerDato(j); 
		for(int i=1;i<=ListaPS.tamano_lista();i++){	
		    auxPS=ListaPS.obtenerDato(i);
		    if(auxPS.Hospital==auxH.Nombre){
		     	auxH.Personal_Hospital.insertar_final(auxPS);
		     	if(auxPS.Tipo=="Medico"){
		     		auxH.Numero_Medicos++;
				}
				if(auxPS.Tipo=="Enfermero"){
		     		auxH.Numero_Enfermeros++;
				} 
			}
		}
		Listah.cambiar(j,auxH);
	}
	for(int k=1;k<=Listah.tamano_lista();k++){
		     	auxH=Listah.obtenerDato(k);
		     	
		     	cout<<k<<": ";
		     	cout<<auxH.Nombre<<","<<auxH.Gerente<<","<<auxH.Localidad<<","<<auxH.calle_inicial<<","<<auxH.calle_final<<","<<auxH.carrera_inicial<<","<<auxH.carrera_final<<","<<auxH.Numero_Medicos<<","<<auxH.Numero_Enfermeros<<endl;    
				
	}
cout<<endl;
}
Paciente Controlador::Personal_Paciente(Paciente nuevo_paciente,int hora, string Hospital){
	int num_medicos=0;
	int num_enfermeros=0;
	int cont=1;
	for(int j=1;j<=ListaPS.tamano_lista();j++){
		auxPS=ListaPS.obtenerDato(j);
		if(nuevo_paciente.NivelGravedad=="Leve"){
				if(auxPS.Tipo=="Medico" && auxPS.num_pacientes<10 && num_medicos<1 && (hora>=auxPS.hora_inicial && hora<=auxPS.hora_final) && Hospital==auxPS.Hospital ){
					num_medicos++;
					auxPS.num_pacientes++;
					auxPS.pacientesPS.insertar_final(nuevo_paciente);
					nuevo_paciente.idPersonal.insertar_final(auxPS.NumeroIdentificacion);
					cont++;
					ListaPS.cambiar(j,auxPS);
				}
				if(auxPS.Tipo=="Enfermero" && auxPS.num_pacientes<10 && num_enfermeros<1 && (hora>=auxPS.hora_inicial && hora<=auxPS.hora_final) && Hospital==auxPS.Hospital){
					num_enfermeros++;
					auxPS.num_pacientes++;
					auxPS.pacientesPS.insertar_final(nuevo_paciente);
					nuevo_paciente.idPersonal.insertar_final(auxPS.NumeroIdentificacion);
					cont++;
					ListaPS.cambiar(j,auxPS);
				}
				if(num_medicos==1 && num_enfermeros==1)
					break;
		}
		if(nuevo_paciente.NivelGravedad=="Moderado"){
				if(auxPS.Tipo=="Medico" && auxPS.num_pacientes<10 && num_medicos<1 && (hora>=auxPS.hora_inicial && hora<=auxPS.hora_final) && Hospital==auxPS.Hospital){
					num_medicos++;
					auxPS.num_pacientes++;
					auxPS.pacientesPS.insertar_final(nuevo_paciente);
					nuevo_paciente.idPersonal.insertar_final(auxPS.NumeroIdentificacion);
					cont++;
					ListaPS.cambiar(j,auxPS);
				}
				if(auxPS.Tipo=="Enfermero" && auxPS.num_pacientes<10 && num_enfermeros<2 && (hora>=auxPS.hora_inicial && hora<=auxPS.hora_final) && Hospital==auxPS.Hospital){
					num_enfermeros++;
					auxPS.num_pacientes++;
					auxPS.pacientesPS.insertar_final(nuevo_paciente);
					nuevo_paciente.idPersonal.insertar_final(auxPS.NumeroIdentificacion);
					cont++;
					ListaPS.cambiar(j,auxPS);
				}
				if(num_medicos==1 && num_enfermeros==2)
					break;
		}
		if(nuevo_paciente.NivelGravedad=="Severo"){
				if(auxPS.Tipo=="Medico" && auxPS.num_pacientes<10 && num_medicos<1 && (hora>=auxPS.hora_inicial && hora<=auxPS.hora_final) && Hospital==auxPS.Hospital){
					num_medicos++;
					auxPS.num_pacientes++;
					auxPS.pacientesPS.insertar_final(nuevo_paciente);
					nuevo_paciente.idPersonal.insertar_final(auxPS.NumeroIdentificacion);
					cont++;
					ListaPS.cambiar(j,auxPS);
				}
				if(auxPS.Tipo=="Enfermero" && auxPS.num_pacientes<10 && num_enfermeros<3 && (hora>=auxPS.hora_inicial && hora<=auxPS.hora_final) && Hospital==auxPS.Hospital){
					num_enfermeros++;
					auxPS.num_pacientes++;
					auxPS.pacientesPS.insertar_final(nuevo_paciente);
					nuevo_paciente.idPersonal.insertar_final(auxPS.NumeroIdentificacion);
					cont++;
					ListaPS.cambiar(j,auxPS);
				}
				if(num_medicos==1 && num_enfermeros==3)
					break;
		}
		
	}
		
	return nuevo_paciente;
}
void Controlador::RecuperarPacientes(){
	for(int i=1;i<=ListaPS.tamano_lista();i++){
		auxPS=ListaPS.obtenerDato(i);
		for(int j=1;j<=ListaPa.tamano_lista();j++){
			auxPa=ListaPa.obtenerDato(j);
			for(int k=1;k<=auxPa.idPersonal.tamano_lista();k++){
				if(auxPa.idPersonal.obtenerDato(k)==auxPS.NumeroIdentificacion){
					auxPS.pacientesPS.insertar_final(auxPa);			
				}
			}
		}
		auxPS.num_pacientes=auxPS.pacientesPS.tamano_lista();
		ListaPS.cambiar(i,auxPS);
	}
}
#endif /*Controlador */ 
