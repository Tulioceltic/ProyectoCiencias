#ifndef	LeerArhcivos_h
#define LeerArchivos_h
#include "Listas.h"
#include "Hospitales.h"
#include <iostream>
#include <fstream>
using namespace std;
class LeerArchivos{
	
	//Lista<Hospitales> ListaAuxH;

	Hospital auxH;
    Lista <Hospital> Listah;
	public:
		LeerArchivos(){
		
		};
	Lista <Hospital> LLenarHospitales();
};
Lista <Hospital> LeerArchivos::LLenarHospitales(){
	
 	string linea;
	ifstream file;
	//ios::append añadir informacion despues de la que ya tenga
	file.open("Archivos//Hospitales.txt",ios::in);
	
    	while(!file.eof()){	    
 
			getline(file,linea,',');
    	    //cout<<linea<<endl;
			auxH.Nombre=linea;
    		
			getline(file,linea,',');
    		//cout<<linea<<endl;
    		auxH.Gerente=linea;
    		
			getline(file,linea,',');
    		    	    //cout<<linea<<endl;
			auxH.Localidad=linea;
    		
			getline(file,linea,',');
    		    	    //cout<<linea<<endl;
           	auxH.calle_inicial=atoi(linea.c_str());
        	
			getline(file,linea,',');
        	    	    //cout<<linea<<endl;
			auxH.calle_final=atoi(linea.c_str());
			
			getline(file,linea,',');
			    	    //cout<<linea<<endl;
			auxH.carrera_inicial=atoi(linea.c_str());
			
			getline(file,linea,',');
			    	    //cout<<linea<<endl;
			auxH.carrera_final=atoi(linea.c_str());
			
			getline(file,linea,',');
			    	    //cout<<linea<<endl;
			auxH.Numero_Medicos=atoi(linea.c_str());
		
			getline(file,linea,'.');
                        //cout<<linea<<endl;
			auxH.Numero_Enfermeros=atoi(linea.c_str());
			getline(file,linea);
			Listah.insertar_final(auxH);
			
			
  
		}
    file.close();
    return Listah;
}
#endif /*LeerArchivos_h */ 
