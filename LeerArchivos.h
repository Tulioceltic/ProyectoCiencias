#ifndef	LeerArhcivos_h
#define LeerArchivos_h
#include "Listas.h"
#include "Hospitales.h"
#include "PersonalSalud.h"
#include <iostream>
#include <fstream>
using namespace std;
class LeerArchivos{
	
	//Lista<Hospitales> ListaAuxH;
	PersonalSalud personalmedico;
	Hospital auxH;
	Personal auxPS;
    ;

    
	public:
		LeerArchivos(){
		
		};
	Lista <Hospital> LLenarHospitales(Lista <Hospital> Listah);
	Lista <Personal> LLenarPersonalSalud(Lista <Personal> ListaPS);
};
Lista <Hospital> LeerArchivos::LLenarHospitales(Lista <Hospital> Listah){
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
Lista <Personal> LeerArchivos::LLenarPersonalSalud(Lista <Personal> ListaPS){
	
 	string linea;
	ifstream file;
	//ios::append añadir informacion despues de la que ya tenga
	file.open("Archivos//PersonalSalud.txt",ios::in);
	
    	while(!file.eof()){	    
 
			getline(file,linea,',');
    	    //cout<<linea<<endl;
			auxPS.Hospital=linea;
    		
			getline(file,linea,',');
    		//cout<<linea<<endl;
    		auxPS.Seccion=linea;
			
    		
			getline(file,linea,',');
    		    	    //cout<<linea<<endl;
			auxPS.Nombre=linea;
    		
			getline(file,linea,',');
    		    	    //cout<<linea<<endl;
           	auxPS.Apellido=linea;
        	
			getline(file,linea,',');
        	    	    //cout<<linea<<endl;
			auxPS.TipoIdentificacion=linea;
			
			getline(file,linea,',');
			    	    //cout<<linea<<endl;
			auxPS.NumeroIdentificacion=atoi(linea.c_str());
			
			getline(file,linea,',');
			    	    //cout<<linea<<endl;
			auxPS.Sexo=linea;	
					
			getline(file,linea,',');
			    	    //cout<<linea<<endl;
			auxPS.TelefonoCel=atoi(linea.c_str());
		
			getline(file,linea,',');
                        //cout<<linea<<endl;
			auxPS.Telefonofij=atoi(linea.c_str());
			
			getline(file,linea,',');
                        //cout<<linea<<endl;
			auxPS.dia=atoi(linea.c_str());
			
			getline(file,linea,',');
                        //cout<<linea<<endl;
			auxPS.mes=atoi(linea.c_str());
			
			getline(file,linea,',');
                        //cout<<linea<<endl;
			auxPS.anio=atoi(linea.c_str());
			
			getline(file,linea,',');
			    	    //cout<<linea<<endl;
			auxPS.Correo=linea;	
				
			getline(file,linea,',');
			    	    //cout<<linea<<endl;
			auxPS.Ciudad=linea;	
				
			getline(file,linea,',');
			    	    //cout<<linea<<endl;
			auxPS.Pais=linea;	
				
			getline(file,linea,',');
			    	    //cout<<linea<<endl;
			auxPS.Direccion=linea;	
			
			getline(file,linea,',');
			    	    //cout<<linea<<endl;
			auxPS.Barrio=linea;
			
			getline(file,linea,',');
			    	    //cout<<linea<<endl;
			auxPS.hora_inicial=atoi(linea.c_str());
			
			getline(file,linea,',');
			    	    //cout<<linea<<endl;
			auxPS.hora_final=atoi(linea.c_str());
			
			getline(file,linea,'.');
			    	    //cout<<linea<<endl;
			auxPS.num_pacientes=atoi(linea.c_str());
			getline(file,linea);
			ListaPS.insertar_final(auxPS);
			
			
  
		}
	for(int j=1;j<=ListaPS.tamano_lista();j++){
		     	auxPS=ListaPS.obtenerDato(j);
		     	cout<<j<<": ";
		     	cout<<auxPS.Nombre<<","<<endl;
		     
		     
	}
    file.close();
    return ListaPS;
}
#endif /*LeerArchivos_h */ 
