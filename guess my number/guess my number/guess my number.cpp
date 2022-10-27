// guess my number.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

using namespace std;
int main()
{
    cout << "Bienvenido a Guess My Number, piensa en un numero.\n";
    int numeroaleatorio;
    int numeroelegido;
    bool ganar = false;
    int numerbase=100;
    int rangomaximo=1;
    int numerosuma;
    int entendido;
    int rangominimo=1;
    int diferencia;

    do
    {   
        srand(static_cast<unsigned int> (time(0))); 
        numerosuma = rand() % rangominimo+1;
        numerbase = rand() % rangomaximo+1;
        numeroaleatorio = numerbase - numerosuma;
        
        
        
        
        
        cout << "el numero que pense fue " << numeroaleatorio << " ese correcto? 1.mas bajo 2. mas alto 3. es correcto\n";
        cin >> entendido;
           

        if (entendido==3) {
            ganar=true;
            cout << "a tu casa humano pete\n";
            return 0;
        } 
        
         
        if (entendido==1) {
            cout << "entendido el numero es menor\n";
            rangomaximo = numeroaleatorio;
        }
        
        if (entendido==2 ) {
            numerosuma = numeroaleatorio;
        } 
        
        
    } while (!ganar);

}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
