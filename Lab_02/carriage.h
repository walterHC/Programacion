#include <bits/stdc++.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

class Carriage
{
	public: 
		string asientos[40];
		int clase;
		int n=0;

		Carriage(){
			for(int i=0; i<sizeof(asientos); i++)
			{
				asientos[i] = "vacante";
			}
		}
		
		void setAsientos(){
                        for(int i=0; i<sizeof(asientos); i++)
                        { 
				int v = rand() % 100;
                                if(clase==1 && v < 10)
				{
					asientos[i]="ocupado";
				}
				else if(clase == 2 && v < 40)
				{
					asientos[i]="ocupado";
				}
                        }
                }

};
