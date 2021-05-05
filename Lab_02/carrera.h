#include <bits/stdc++.h>
#include "atleta.h"

using namespace std;

class Carrera
{
	public: 
		int cant = 0; 
		//string gandor;
		//Atleta ganador;
		Atleta competidores[50];
		int distance;
		
		carrera(){

		}
	
		Carrera(int distancia)
		{
			distance = distancia;
		}
		
		void detalleGanador()
		{
			cout << "Detalles del ganador: " << endl;
			ganador.toString()
		}

		void ganador (Atleta gan)
		{
			ganador = gan;
		}

		void registrar(Atleta a)
		{
			competidores[cant] = a;
			cant++;
		}
		
		Atleta ganador()
		{
			int rapido = competidores[0];
			int pos = 0;

			for(int i=1; i < sizeof(competidores); i++)
			{
				if(competidores[i].time < rapido)
				{
					rapido = competidores[i];
					pos = i;
				}
			}
			return competidores[pos];
		}
};
