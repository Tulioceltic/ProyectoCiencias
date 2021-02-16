#ifndef	MenuSimulacion_h
#define MenuSimulacion_h
#include <iostream>
#include <cstdlib>
#include "Listas.h"
#include "Hospitales.h"
#include "PersonalSalud.h"
#include "Pacientes.h"
#include "Controlador.h"
using namespace std;

class MenuSimulacion{
	private:
		Hospital auxH;
		Personal auxPS;
		Paciente auxPa;
		Lista <Hospital> Listah;
	    Lista <Personal> ListaPS;
	    Lista <Paciente> ListaPa;
	   
	public:
		MenuSimulacion(Controlador Listas){
			Listah=Listas.getListaHospitales();
			ListaPS=Listas.getListaPersonal();
			ListaPa=Listas.getListaPacientes();
		}
		void MostrarHospitales();
		void MostrarPersonal();
		void MostrarPaciente();
};

void MenuSimulacion::MostrarHospitales(){
	int opcion;
	cout<<"A que Hospital pertenece"<<endl;
	for(int k=1;k<=Listah.tamano_lista();k++){
		     	auxH=Listah.obtenerDato(k);
		     	
		     	cout<<k<<": ";
		     	cout<<auxH.Nombre<<endl;    
				
	}
	while(opcion<=0 || opcion>=Listah.tamano_lista()){
		cin>>opcion;
	}

	auxH=Listah.obtenerDato(opcion);
	for(int j=1;j<=auxH.Personal_Hospital.tamano_lista();j++){
		     	auxPS=auxH.Personal_Hospital.obtenerDato(j);
		     	
		     	cout<<j<<": ";
		     	cout<<auxPS.Nombre<<endl;  
				for(int i=1;i<=auxPS.pacientesPS.tamano_lista();i++){  
					auxPa=auxPS.pacientesPS.obtenerDato(i);
		     	
		     		cout<<"Paciente  "<<i<<": ";
		     		cout<<auxPa.Nombre<<","<<auxPa.NumeroIdentificacion<<endl; 
			}
	}
}

#endif /*MenuSimulacion*/


