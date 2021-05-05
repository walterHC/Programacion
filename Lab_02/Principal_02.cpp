#include <iostream>
#include "tanque.h"

using namespace std;

int main(){
	Tanque t;
	t.agregar(100);
	cout << "El contenido del tanque es " << t.getContenido() << endl;
	
	while(t.getContenido() > 1.0)
	{
		t.sacaMitad();
		cout << t.getContenido() << endl;
	}

	cout << "El contenido sobrante del tanque es " << t.getContenido() << endl;
	return 0;
}
