/* TP N°3 - MARCO PRÁCTICO

    Resolver y Realizar en C++:

        a. La suma de 45 + 34 mostrar x pantalla el resultado.
        b. La resta de 45 -40 mostrar le resultado x pantalla.
        c. La división de 46 y 3.
        d. Un programa que multiplique 65 * 3 con la salida en pantalla. */

#include <iostream>

using namespace std;
        
int main() 
    {
        int suma = 45 + 34;
        cout << "La suma de 45 + 34 es: " << suma << endl;
            
        int resta = 45 - 40;
        cout << "La resta de 45 - 40 es: " << resta << endl;
            
        double division = 46.0 / 3.0;
        cout << "La division de 46 entre 3 es: " << division << endl;
            
        int multiplicacion = 65 * 3;
        cout << "La multiplicacion de 65 por 3 es: " << multiplicacion << endl;
            
        return 0;
    }