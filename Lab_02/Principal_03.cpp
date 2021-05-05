#include <iostream>
#include "atleta.h"
#include "carrera.h"

using namespace std;

Atleta atletaMasRapido(Atleta a1, Atleta a2)
{
	if(a1.time < a2.time)
	{
		return a1;
	}
	return a2;
}

int main(){
	Atleta a1("Pedro", 23, "Peruano", 23.6);
	Atleta a2("Jorge", 31, "Argentino", 20.2);
	Atleta a3("Manuel", 13, "Colombiano", 30.6);
	Atleta a4("Luis", 7, "Mexicano", 18.6);	
	
	cout << "El atleta mas rapido es " << atletaMasRapido(a1, a2).name << endl;

	Carrera c1(100);
	//c1.athlete_name = a2.name;
	
	c1.registrar(a1);
	c1.registrar(a2);
	c1.registrar(a3);
	c1.registrar(a4);
	
	cout << "Ganador de la carrera es " << c1.ganador().name << endl;
	return 0;
}
