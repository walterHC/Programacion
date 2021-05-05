#include <bits/stdc++.h>

using namespace std;

class Sala
{
	public: 
		string name;
		double width;
		double length;
		bool equipped;

	
		Sala(){
		
		}

		Sala(string nombre, double ancho , double largo, bool equipado)
		{
			name = nombre;
                        width = ancho;
                        length = largo;
                        equipped = equipado;
		}

		int capacidad()
		{
			return (width*length)/1.5;
		}

		double alquiler()
		{
			if(equipped)
			{
				return width*length*45;
			}else{
				return width*length*32;
			}
		}

		void imprimirSala()
		{
		 	cout << "Sala " << name << "Superficie" << width*length << "Capacidad" << capacidad() << "Costo" << alquiler() << endl;
		} 
};
