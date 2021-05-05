#include <bits/stdc++.h>

using namespace std;

class Candado
{
	public: 
		int comb_seguridad[3];
		int comb_estado[3];

		Candado()
		{
			comb_seguridad[0] = 0;
			comb_seguridad[1] = 0;
			comb_seguridad[2] = 0;


			comb_estado[0] = 0;
			comb_estado[1] = 0;
			comb_estado[2] = 0;
		}
		
		void  cambiarDigito(int pos, int valor)
		{
			if( (pos >= 0 && pos < sizeof(comb_estado)) && (valor >= 0 && valor <= 9)){ 
				comb_estado[pos] = valor;
			}else{
				cout << "datos ingresados incorrectos\n";
			} 
		}

		bool puedeAbrir()
		{
			for(int i=0; i<sizeof(comb_estado); i++)
			{
				if(comb_estado[i] != comb_seguridad[i])
				{
					return false;
				}
			}
			return true;
		}

		bool mismaCombinacion(Candado c)
		{
			for(int i=0; i<sizeof(comb_estado); i++)
                        {
                                if(comb_estado[i] != c.comb_estado[i])
                                {
                                        return false;
                                }
                        }
			return true;
		}
};

