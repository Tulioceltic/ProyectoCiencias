#ifndef	Consultas_h
#define Consultas_h
#include "Listas.h"
#include "Controlador.h"
#include "Hospitales.h"
#include "PersonalSalud.h"
#include "Pacientes.h"
#include <iostream>
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
/*void Consultas::PersonalHorarioLocalidad(Lista <Personal> ListaAuxPS,string Localidad, int hora_inicial, int hora_final){
	for(int j=1;j<=ListaAuxPS.tamano_lista();j++){
    auxPS=ListaAuxPS.obtenerDato(j);
    if(auxPS.){
     	calle_carrera.insertar_pos(auxH,cont);
     	cont++;
     }
		 
}*/
#endif /*Consultas_h */ 
