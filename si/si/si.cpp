// si.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include<iterator>
using namespace std;
int main()
{
    int estudiantes;
    std::cout << "cuatos estudiantes tienes\n";
    cin >> estudiantes;
    int calificacion; 
    int promedio=0;
    
    for (int i=1; i <= estudiantes; i++) {
        cout << "dame la calificacion del estudiante: " << i << endl;
        cin >> calificacion;
        promedio += calificacion;
    }
    promedio = promedio / estudiantes;
    cout << "este es el promedio: " << promedio << endl;
}
