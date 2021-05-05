#include <iostream>
#include "candado.h"

using namespace std;

int main(){
	
	Candado c1;
	Candado c2;
	
	c1.cambiarDigito(1, 7);

	if(c1.puedeAbrir())
	{
		cout << "Se puede abrir " << endl;
	}else{
		cout << "No se puede abrir " << endl;
	}

	if(c1.mismaCombinacion(c2))
        {
                cout << "candado 1 tiene la misma combinacion que el candado 2 " << endl;
        }else{
		cout << "candado 1 no tiene la misma combinacion que el candado 2 " << endl;
        }

	return 0;
}
