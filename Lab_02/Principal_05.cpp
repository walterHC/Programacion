#include <iostream>
#include "sala.h"

using namespace std;

int main(){

	Sala s1("Sala 1",12 ,8, true);
	Sala s2("Sala 2",20 ,18, false);
	Sala s3("Sala 3",15 ,12, true);

	s1.imprimirSala();
	s2.imprimirSala();
	s3.imprimirSala();

	int eventos[4] = {200, 50, 100, 150};

	for(int i=0; i < sizeof(eventos); i++)
	{
		cout << "Las salas disponibles para " << eventos[i] << "personas son: "
		if(eventos[i] <= s1.capacidad())
		{
			cout <<"-" << s1.name << endl;
		}
		if(eventos[i] <= s2.capacidad())
                {
                        cout <<"-" << s2.name << endl;
                }
		if(eventos[i] <= s3.capacidad())
                {
                        cout <<"-" << s3.name << endl;
                }
	}
	return 0;
}
