#include <bits/stdc++.h>

using namespace std;

class Atleta
{
	public: 
		string name;
		int number;
		string nationality;
		double time;

		Atleta(){

		}

		Atleta(string nombre, int numero, string nacionalidad, double tiempo)
		{
			name = nombre;
			number = numero;
			nationality = nacionalidad;
			time = tiempo;
		}
			
		void toString()
		{
			cout << "Nombre: " << name << "Numero: " << number << "Nacionalidad: " << nationality << "Tiempo: " << time << endl;
		}
};
