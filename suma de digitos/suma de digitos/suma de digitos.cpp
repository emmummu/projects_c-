// suma de digitos.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;
int main()
{
	
		int max;
		int min;
		cout << "dame un numero para el rango minimo\n";
		cin >> min;
		cout << "dame un numero para el rango maximo\n";
		cin >> max;
		for (min; min <= max; min++) {
			
			if (min == 3 || min == 5||min==2) {
				cout << min << endl;
			}
			if (min == 1) {
				cout << "";
			}
			else if ((min % 2) >=1 && (min % 3)>=1 && (min % 5)>=1) {
				cout << min << endl;
			}
		}
		cout << "estos son todos los numeros primos\n";

}

