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
		system("cls");
		cout << "\t-----------MENU PRINCIPAL-----------" << endl << endl;
		cout << "\1. Consultar hospitales y centros medicos segun Calles y Carreras." << endl;
       // controlar.Controlador();
        controlar.ConsultarHospitales();
   		controlar.ConsultarPersonalSalud();
   		
}
#endif /*Menu */ 
