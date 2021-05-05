#include <bits/stdc++.h>
using namespace std;

class Tanque
{
	double contenido;
	
	public:
		static const int capacidad = 5000.0;
		Tanque()
		{
			contenido = 0;
		};

		double getContenido() const
		{
			return contenido;
		};

		void agregar(double cantidad)
		{
			if(contenido + cantidad <= capacidad)
			{
				contenido = contenido + cantidad;
			}else{
				cout << "Excede la capacidad del tanque.\n";
			}
			
		};

		void sacar(double cantidad)
		{
			if(contenido - cantidad >= 0)
			{
				contenido = contenido - cantidad;
			}else{
				cout << "La cantidad a sacar es mayor al  contenido actual del tanque.\n";
			}
		};

		void sacaMitad()
		{
			if(contenido > 0)
			{
				contenido = contenido / 2;
			}
		};
};
