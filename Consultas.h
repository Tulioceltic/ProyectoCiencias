#ifndef	Consultas_h
#define Consultas_h
#include "Listas.h"
#include "Hospitales.h"
#include <iostream>
class Consultas{
	
	Hospital auxH;
	public:
		Consultas(){
		
		};
		void HospitalesCalleCarreras(Lista <Hospital> ListaAuxH,int calle_inicial,int calle_final,int carrera_inicial,int carrera_final);
		
	
};
void Consultas::HospitalesCalleCarreras(Lista <Hospital> ListaAuxH,int calle_inicial,int calle_final,int carrera_inicial,int carrera_final){
	Lista <Hospital> calle_carrera;
	int cont=1;
	for(int j=1;j<=ListaAuxH.tamano_lista();j++){
     	auxH=ListaAuxH.obtenerDato(j);
     	if(calle_inicial>=auxH.calle_inicial && calle_final<=auxH.calle_final && carrera_inicial>=auxH.carrera_inicial && carrera_final<=auxH.carrera_final){
     		calle_carrera.insertar_pos(auxH,cont);
     		cont++;
		 }
   	}
   	if(calle_carrera.lista_vacia()){
   		cout<<"No hay Hospitales que cubran la direccion que ha ingresado"<<endl;
	}else{
		for(int j=1;j<=calle_carrera.tamano_lista();j++){
	     	auxH=calle_carrera.obtenerDato(j);
	     	cout<<j<<": ";
	     	cout<<auxH.Nombre<<endl;
	     
	     
	   	}	
	}
    
}
#endif /*Consultas_h */ 
