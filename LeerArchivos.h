#ifndef	LeerArhcivos_h
#define LeerArchivos_h
#include "Listas.h"
#include "Hospitales.h"
#include "PersonalSalud.h"
#include "Pacientes.h"
#include <iostream>
#include <fstream>
using namespace std;
class LeerArchivos{
	
	//Lista<Hospitales> ListaAuxH;
//	PersonalSalud personalmedico;
	Hospital auxH;
	Personal auxPS;
	Paciente auxPa;
	public:
		LeerArchivos(){
		
		};
	Lista <Hospital> LLenarHospitales(Lista <Hospital> Listah);
	Lista <Personal> LLenarPersonalSalud(Lista <Personal> ListaPS);
	Lista <Paciente> LLenarPacientes(Lista <Paciente> ListaPa);
};
Lista <Hospital> LeerArchivos::LLenarHospitales(Lista <Hospital> Listah){
 	string linea;
// 	string lineaH;
	ifstream file;
//	ifstream fileH;
//	Personal auxPSH;
//	int contMedicos=0,contEnfermeros=0;
	//ios::append añadir informacion despues de la que ya tenga
//	fileH.open("Archivos//PersonalSalud.txt",ios::in);
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
			
		/*	while(!fileH.eof()){
				getline(fileH,lineaH,',');
				if(lineaH==auxH.Nombre){
					auxH.Personal_Hospital.insertar_final()
				}
			}*/
			
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
    		auxPS.Tipo=linea;
    		
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
    file.close();
    return ListaPS;
}

Lista <Paciente> LeerArchivos::LLenarPacientes(Lista <Paciente> ListaPa){
	string linea;
	ifstream file;
	file.open("Archivos//Pacientes.txt",ios::in);
		while(!file.eof()){	 
			getline(file,linea,',');
    	    //cout<<linea<<endl;
			auxPa.Nombre=linea;
    		
			getline(file,linea,',');
    		//cout<<linea<<endl;
    		auxPa.Apellido=linea;
    		
    		getline(file,linea,',');
    		    	    //cout<<linea<<endl;
           	auxPa.NumeroIdentificacion=atoi(linea.c_str());
           	
           	getline(file,linea,',');
           	auxPa.sexo=linea;
           	
           	getline(file,linea,',');
    		    	    //cout<<linea<<endl;
           	auxPa.dia=atoi(linea.c_str());
           	
           	getline(file,linea,',');
    		    	    //cout<<linea<<endl;
           	auxPa.mes=atoi(linea.c_str());
           	
           	getline(file,linea,',');
    		    	    //cout<<linea<<endl;
           	auxPa.anio=atoi(linea.c_str());
           	
           	getline(file,linea,',');
           	auxPa.Enfermedades=linea;
           	
           	getline(file,linea,',');
           	auxPa.Localidad=linea;
           	
           	getline(file,linea,',');
           	auxPa.Estado=linea;
           	
           	getline(file,linea,',');
           	auxPa.NivelGravedad=linea;
           	
           	getline(file,linea,'.');
           	auxPa.Medicamentos=linea;
           	
           	getline(file,linea);
			ListaPa.insertar_final(auxPa);
		}
	file.close();
	return ListaPa;
	
}
#endif /*LeerArchivos_h */ 
