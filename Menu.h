#ifndef	Menu_h
#define Menu_h
#include "Consultas.h"
#include "Controlador.h"
#include <cstdlib>
#include <iostream>

using namespace std;
class Menu{
	    Controlador controlar;
	public:
		Menu(){
			
		};
		void MenuPrincipal();
};
void Menu::MenuPrincipal(){
	int op;
	//	system("cls");
		cout << "\t-----------MENU PRINCIPAL-----------" << endl << endl;
		cout << "\1. Consultar hospitales y centros medicos segun Calles y Carreras." << endl;
       // controlar.Controlador();
        controlar.Hospital_Personal();
        controlar.RecuperarPacientes();
      //  controlar.ConsultarHospitales();
   		
   		//controlar.AdicionarHospital("hcd","jsa","sady",32,23,15,13,21,20);
   	//	controlar.AdicionarPaciente("Guillermo","Velez",1234,"M",21,10,2001,"Ninguna","Olaya","Asintomatico","Leve","acetaminofen");
   	//	controlar.AdicionarPaciente("Juan","Bautista",12345,"M",21,10,2001,"Ninguna","Olaya","Asintomatico","Severo","acetaminofen");
	//	controlar.AdicionarPaciente("Daniel","Vargas",467342,"M",15,11,2004,"Ninguna","Restrepo","Asintomatico","Moderado","acetaminofen");
	//	controlar.AdicionarPaciente("Sofia","Munoz",432112,"F",15,11,1999,"Dermatitis","Restrepo","Asintomatico","Leve","Gengibre");
   		controlar.ConsultarPacientes();
   		controlar.ConsultarPersonalSalud();
}
#endif /*Menu */ 
