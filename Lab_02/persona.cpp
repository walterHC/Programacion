#include <iostream>
#include "persona.h"

using namespace std;

void Persona::dormir(){
	cout  << name << " se fue a dormir." << endl;
}

void Persona::hablar(){
	cout  << name << " esta hablando." << endl;
}

void Persona::contar(){
	cout << name << " contando 1, 2, 3, 4 , ..." << endl;
}

void Persona:: adquirirNombre(){
	cout << name << endl;
}

void Persona::decirNombre(){
        cout << "Ingrese su nombre: " << endl;
        cin >> name;
	cout << "Mi nombre es "<< name << endl;
}

