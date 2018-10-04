// Codigo fuente: realizar un programa que sistematice el salario
// de un empleado de acuerdo a las ventas efectuadas por él.
// Nombre del programador: Carlos Manuel Guevara Hernandez
// Carnet: GH18015
// Fecha de diseño del programa: 10 de septiembre de 2018

// Libreria obligatoria

#include <iostream>

// Libreria para cambiar color de consola

#include <cstdlib>

// Libreria para agregar sonido a la consola

#include <windows.h>

// Cuerpo del programa

using namespace std;

 int main() {

    system ( "color 9C" );

// Variables a utilizar

int ventas; // esta variable va a definir el numero de las ventas
int sueldo; // esta variable definira el sueldo a pagar al empleado
int porcentaje; // esta variable define el 20% las ventas

do {

    // El programa inicia solicitando ingresar el numero de ventas en el mes
    cout << "Ingrese el numero de sus ventas realizadas en el mes: ";
    cin >> ventas;

} while ( ventas  <= 0 );

// En esta condicion se hace una comparacion del numero de ventas
// para asi definir el sueldo a pagar

    if ( ventas > 0 && ventas <= 500000 ) {

        sueldo = 80000;

        cout << "Su sueldo es de: $ "  << sueldo << endl;
    }

// De la linea 42 en adelante se solicita
// que si no cumple la condicion anterior se efectue la siguiente
    else if ( ventas > 500001 && ventas <= 1000000 ) {

        sueldo = 160000;

        cout << "Su sueldo es de: $ "  << sueldo << endl;

    }

    else if ( ventas > 1000001 && ventas <= 1500000 ) {

        sueldo = 320000;

        cout << "Su sueldo es de: $ "  << sueldo << endl;
    }

    else if ( ventas > 1500001 && ventas <= 2500000 ) {

        sueldo = 450000;

        cout << "Su sueldo es de: $ "  << sueldo << endl;
    }

    else if ( ventas > 2500001 && ventas <= 4000000 ) {

        sueldo = 550000;

        cout << "Su sueldo es de: $ "  << sueldo << endl;

    }

    // Aqui al vendedor se le entrega el 20% de las ventas efectuadas
    else if ( ventas > 4000000 ) {
                porcentaje = ventas * 0.20;
                sueldo = ventas * porcentaje;

        cout << "Su sueldo es de: $ "  << sueldo << endl;
    }

    // Aqui se aclara que si el empleado no realiza ventas
    // no se le efectuara ningun pago
    else {

        cout << "No tendra pago en este mes" << endl;
    }



Beep (880,500);

Beep (6.30,100);

Beep (698.48,500);

Beep (880,500);

Beep (587.33,1000);

Beep (689.46,500);

Beep (880,250);

Beep (1046.50,250);

Beep (987.77,500);

Beep (783.99,500);

Beep (698.46,250);

Beep (783.99,250);

Beep (880,500);

Beep (587.33,500);

Beep (523.25,250);

Beep (659.26,250);

Beep (587.33,750);

Beep (783.99,250);

Beep (880,500);

Beep (587.33,500);

Beep (523.25,250);

Beep (659.26,250);

Beep (587.33,750);

Beep (689.46,500);

Beep (880,250);

Beep (1046.50,250);

Beep (987.77,500);

Beep (783.99,500);

Beep (783.99,250);

Beep (880,500);

Beep (587.33,500);



cin.get();

    system ( " PAUSE " );

    return 0;// Fin del programa

    }
