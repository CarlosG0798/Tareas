//Codigo fuente: Calcular las ventas de sacos de cafe de una empresa.
//Realizado por: Carlos Manuel Guevara Hernandez
//Carnet: GH18015

#include <iostream>
// libreria obligatoria

#include <math.h>

//Libreria para operaciones matematicas

using namespace std;

// Declaracion de variables a utilizar
int sacos;
int total;
int precioSaco;
float precioTotal;
float precioDescuento;
float descuento;
float IVA;


int main()
{
//Inicio del codigo
//Mensaje de bienvenida al usuario

    cout << "Bienvenido a exportadora de cafe S.A de C.V" << endl;
// Escribir el precio del saco
    cout << "Escriba el precio de cada saco: $ "; cin >> precioSaco;
// Escribir la cantidad de sacos a comprar
    cout << "Cuantos sacos desea comprar: "; cin >> sacos;

// Cumplir condiciones para aplicar descuentos

    if (sacos > 100) {

        //Cuerpo del codigo y de la condicion if

            total = sacos * precioSaco;

            IVA = total * 0.13;

            precioTotal = total + IVA;

            descuento = precioTotal * 0.10;

            precioDescuento = precioTotal - descuento;
            cout << "El total a cancelar es: $ " << precioDescuento << endl;
    }

        else if (sacos > 200) {

            total = sacos * precioSaco;

            IVA = total * 0.13;

            precioTotal = total + IVA;

            descuento = precioTotal * 0.15;

            precioDescuento = precioTotal - descuento;

            cout << "El total a cancelar es: $ " << precioDescuento << endl;
    }

        else if (sacos > 250 && sacos < 300) {

            total = sacos * precioSaco;

            IVA = total * 0.13;

            precioTotal = total + IVA;

            descuento = precioTotal * 0.20;

            precioDescuento = precioTotal - descuento;

            cout << "El total a cancelar es: $ " << precioDescuento << endl;
    }

        else if (sacos >= 300) {

            total = sacos * precioSaco;

            IVA = total * 0.13;

            precioTotal = total + IVA;

            descuento = precioTotal * 0.25;

            precioDescuento = precioTotal - descuento;

            cout << "El total a cancelar es: $ " << precioDescuento << endl;
    }

        else  {

        cout << "El descuento no aplica para esta cantidad" << endl;
    }


    return 0;
} // Finalizacion del codigo dando control a la consola
