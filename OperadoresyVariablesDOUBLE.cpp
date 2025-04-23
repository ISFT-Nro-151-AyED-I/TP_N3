/* TP N°3 - MARCO TEÓRICO

    Resolver usando variables y operadores, mostrar el resultado x pantalla.

        a. Calcula el volumen, de una habitación que tiene 5 m de largo, 4 m de ancho y 2.5 m de alto.
        b. Escribe un programa en C++ que nos diga cuál es el volumen de un cono con un radio de la base de 14,5 y una altura de 26,79. La fórmula que debes usar es: (Pi x (radio)2 / altura) /3, recordar Pi=3.14.
        c. Modificar el programa anterior para que usen variables double. ¿Qué diferencia nota? ¿Por qué? */

#include <iostream>
#include <iomanip>
        
using namespace std;
        
int main()
    {
        int largo = 5, ancho = 4;
        double alto = 2.5, volumenHabitacion = largo * ancho * alto;

        cout << "El volumen de la habitacion es: " << volumenHabitacion << " metros cubicos" << endl;
            

        double radio = 14.5, alturaCono = 26.79, pi = 3.14, volumenCono = (pi * radio * radio * alturaCono) / 3;
        
        cout << "El volumen del cono es: " << fixed << setprecision(2) << volumenCono << " unidades cubicas" << endl;
            
        return 0;
    }

/* Si modificamos el programa del volumen de la habitación y del cono para usar variables double, no hay una diferencia 
en el resultado final, pero sí en la precisión y el rango de valores que las variables pueden almacenar. double puede 
almacenar números con decimales y tiene un rango mucho mayor que int. Esto es crucial para cálculos como el del volumen 
del cono, donde los valores pueden no ser enteros y la precisión es importante. Si hubiéramos usado int para el radio o 
la altura, los valores decimales se habrían truncado (cortado), lo que habría llevado a un resultado incorrecto. */