#ifndef	Consultas_h
#define Consultas_h
#include "Listas.h"
#include "Controlador.h"
#include "Hospitales.h"
#include "PersonalSalud.h"
#include "Pacientes.h"
#include <iostream>
#include <time.h>
using namespace std;
class Consultas{
	private:
		Hospital auxH;
		Personal auxPS;
		Paciente auxPa;
		Lista <Hospital> Listah;
	    Lista <Personal> ListaPS;
	    Lista <Paciente> ListaPa;
	public:
		Consultas(Controlador RecuperarListas){
		Listah= RecuperarListas.getListaHospitales();
		ListaPS= RecuperarListas.getListaPersonal();
		ListaPa= RecuperarListas.getListaPacientes();
		};
		void HospitalesCalleCarreras(int calle_inicial,int calle_final,int carrera_inicial,int carrera_final);
		void PersonalHorarioLocalidad(string Localidad, int hora_inicial, int hora_final);
		void PersonalPacienteHorario(string paciente, int hora);
		void LocalidadPacientesEnfermosAntes(string Localidad);
		void PersonalMostrarPacientesEnTiempo (string nombre , string apellido , int inicio, int fin);
		void PacientePSConRangoDAtencion(string nombre , string apellido , int inicio , int fin);
		void PacientesLocalidadEdad (string localidad, int edadMinima , int edadMaxima);
		void PacientesEdad(int edadMinima , int edadMaxima);
};

void Consultas::HospitalesCalleCarreras(int calle_inicial,int calle_final,int carrera_inicial,int carrera_final){
	int cont=0;
	for(int j=1;j<=Listah.tamano_lista();j++){
     	auxH=Listah.obtenerDato(j);
     	if(calle_inicial>=auxH.calle_inicial && calle_final<=auxH.calle_final && carrera_inicial>=auxH.carrera_inicial && carrera_final<=auxH.carrera_final){
     		cout<<auxH.Nombre<<endl;
     		cont++;
		 }
   	}
   	if(cont==0){
   		cout<<"No hay Hospitales que cubran la direccion que ha ingresado"<<endl;
	}
    
}

void Consultas::PersonalHorarioLocalidad(string Localidad, int hora_inicial, int hora_final){
	int cont=0;
	for(int j=1;j<=ListaAuxPS.tamano_lista();j++){
    	auxPS=ListaAuxPS.obtenerDato(j);
    	if(auxPS.Barrio == Localidad && auxPS.hora_inicial == hora_inical && auxPS.hora_final==hora_final){
    		cout<<auxPS.Nombre<<"\t"<<auxPS.Apellido<<"\n";
			cont++;
		}
    
    }
    if(cont==0){
    	cout<<"No hay nadie disponible para este sector con este horario"<<endl;
	}
		 
}

void Consultas::PersonalPacienteHorario( string paciente, int hora){
	
	int cont=0;
	for(int j=1;j<=ListaAuxPS.tamano_lista();j++){
    	auxPS=ListaAuxPS.obtenerDato(j);
    	if(auxPS.hora_inicial < hora && auxPS.hora_final > hora){
    		cout<<auxPS.Nombre<<"\t"<<auxPS.Apellido<<"\n";
			cont++;
		}
    
    }
    if(cont==0){
    	cout<<"No hay nadie disponible para atender a este paciente"<<endl;
	}
}

void Consultas::LocalidadPacientesEnfermosAntes(string Localidad){
	
	int cont=0;
	for(int j=1;j<=ListaAuxPa.tamano_lista();j++){
		auxPa=ListaAuxPa.obtenerDato(j);
		if(auxPa.Enfermedades!="Ninguna" && auxPa.Localidad==Localidad){
			cout<<auxPa.Nombre<<"\t"<<auxPa.Apellido<<"\n";
			cont++;
		}
	}
	if (cont==0){
		cout<<"En esta localidad no hay pacientes con enfermedad pre-Existente"<<endl;
	}
}

/*void Consultas::PersonalMostrarPacientesEnTiempo(string nombre, string apellido , int inicio , int fin){
	
	int cont=0;
	for(int j=1;j<=ListaAuxPS.tamano_lista();j++){
		auxPS=ListaAuxPS.obtenerDato(j);
		if(auxPS.Nombre == nombre && auxPS.Apellido == apellido)
		{
			int cont2=0;
			for(int y=0;y<=auxPS.pacientesPS.tamano_lista();y++){
				
			}
		}
	}
}
// consulta 5 no se como avanzar

void Consultas::PacientePSConRangoDAtencion(string nombre, string apellido , int inicio , int fin){
	
	int con=0;
	for(int j=1;j<=ListaAuxPa.tamano_lista();j++){
		auxPa=ListaAuxPa.obtenerDato(j);
		if(auxPa.Nombre == nombre && auxPa.Apellido == apellido){
			for(int y=0;y<=auxPa.idPersonal.tamano_lista();y++)
			{
				for(int f=1;f<=ListaAuxPS.tamano_lista():f++){
					auxPS=ListaAuxPS.obtenerDato(f);
					if(auxPS.NumeroIdentificacion==auxPa.idPersonal(y)){
						cout<<auxPS.Nombre<<"\t"<<auxPS.Apellido<<"\t"
					}
				}
			}
		}
	}
}
// consulta 6 no se como avanzar
*/ 

void Consultas::PacientesLocalidadEdad(string localidad, int edadMinima , int edadMaxima){
	int conta=0;
	for (int j=1;j<=ListaAuxPa.tamao_lista();j++){
		auxPa=listaAuxPa.obtenerDato(j);
		int edad;
		int edad = 2021-auxPa.anio;
		if(auxPa.mes>2){
			edad--;
		}
		else if(auxPa.dia>22){
			edad--;
		}
		int id=auxPa.idPersonal(1);
		for (int i=1;i<=ListaAuxPS.tamao_lista();i++){
			auxPS=listaAuxPS.obtenerDato(i);
			string hospi=auxPS.Hospital;
			for (int z=1;z<=ListaAuxPS.tamao_lista();z++){
				auxH=listaAuxH.obtenerDato(z);
				if(auxH.Localidad==localidad && edad<=edadMaxima && edad<=edadMMinima){
					cout<<auxPa.Nombre<<"\t"<<auxPa.Apellido<<"\t"<<edad<<"\t"<<auxPa.NumeroIdentificacion<<"\t"<<auxPa.sexo<<"\t"<<auxPa.Estado<<"\t"<<auxPa.NivelGravedad<<"\n";
					conta++;
				}
			}
		}
	}
	if (conta=0){
		cout<<"No hay pacientes en la localidad: "<<localidad<<endl;
	}
}

void Consultas::PacientesEdad(int edadMinima , int edadMaxima){
	int conta=0;
	for (int j=1;j<=ListaAuxPa.tamao_lista();j++){
		auxPa=listaAuxPa.obtenerDato(j);
		string h;
		string l;
		long int medi=auxPa.idPersonal(1);
		for (int u=1;u<=ListaAuxPS.tamao_lista();u++){
			auxPS=listaAuxPS.obtenerDato(u);
			if(medi==auxPS.NumeroIdentificacion){
				h=auxPS.Hospital;
			}
		}
		for (int u=1;u<=ListaAuxH.tamao_lista();u++){
			auxH=listaAuxH.obtenerDato(u);
			if(h==auxH.Nombre){
				l=auxH.Localidad;
			}
		}
		int estaen=0;
		if (auxPa.NivelGravedad=="Leve"){
			estaen=1;
		}
		else if(auxPa.NivelGravedad=="Moderado")
		{
			estaen=2;
		}
		else{
			estaen=3;
		}
		int edad;
		int edad = 2021-auxPa.anio;
		if(auxPa.mes>2){
			edad--;
		}
		if (edad>=edadMinima && edad<=edadMaxima){
			cout<<auxPa.Nombre<<" "<<auxPa.Apellido<<": \n";
			cout<<"Edad: \t"<<edad<<"\n";
			cout<<"Estado: \t"<<auxPa.Estado<<"\n";
			cout<<"Gravedad: \t"<<auxPa.NivelGravedad<<"\n";
			cout<<"Se encuentra en: \t";
			if(estaen==1){
				cout<<"Su casa"<<"\n";
				cout<<"En la localidad de "<<auxPa.Localidad<<"\n";
			}
			else if(estaen==2{
				cout<<"Secciones generales en "<<h<<"\n";
				cout<<"En la localidad de "<<l<<"\n";
			}
			else
			{
				cout<<"Cuidado intensivo en "<<h<<"\n";
				cout<<"En la localidad de "<<l<<"\n";
			}
		}
}

#endif /*Consultas_h 
