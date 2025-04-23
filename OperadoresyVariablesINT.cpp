/* TP N°3 - MARCO TEÓRICO

    Resolver usando variables y operadores, mostrar el resultado x pantalla.

        a. Calcula el volumen, de una habitación que tiene 5 m de largo, 4 m de ancho y 2.5 m de alto.
        b. Escribe un programa en C++ que nos diga cuál es el volumen de un cono con un radio de la base de 14,5 y una altura de 26,79. La fórmula que debes usar es: (Pi x (radio)2 / altura) /3, recordar Pi=3.14.
        c. Modificar el programa anterior para que usen variables double. ¿Qué diferencia nota? ¿Por qué? */

#include <iostream>
                
using namespace std;
                
int main()
    {
        int largo = 5, ancho = 4, alto = 2.5, volumenHabitacion = largo * ancho * alto;
    
        cout << "El volumen de la habitacion es: " << volumenHabitacion << " metros cubicos" << endl;
                        
            
        int radio = 14.5, alturaCono = 26.79, pi = 3.14, volumenCono = (pi * radio * radio * alturaCono) / 3;
        
        cout << "El volumen del cono es: " << volumenCono << " unidades cubicas" << endl;
                        
        return 0;
    }