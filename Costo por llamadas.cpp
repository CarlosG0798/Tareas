//Creado por: Carlos Manuel Guevara Hernandez
//Numero de carnet: GH18015

#include <iostream> //Libreria para entrada/salida de datos

using namespace std;//Inicio del programa

int cl ( int clear );//Verificacion de que lo que se ingresa es correcto

void l ();//Limpia la pantalla no retorna/no tiene parametros

int main()//Cuerpo del programa
{
//Declaracion de variables que utilizaremos
    int llamadasTotal;
    float tppm;
    int minuto;

    do{//Verificacion de que los datos esten correctos

//Se solicita ingresar el numero de llamadas realizadas
        cout << "Ingrese la cantidad de llamadas: ", cin >> llamadasTotal;
        cl (llamadasTotal);

      } while ( llamadasTotal < 1 || cin.fail());

    for(int i = 0; i < llamadasTotal; i++)
    {

        do {//Se verifica que no haya ningun error con los datos a ingresar

//Se solicita el ingreso de la duracion de cada llamada
        cout << "Ingrese la duracion de la llamada " << i+1 << ": " << endl;
        cin >> minuto;
        cl (minuto);

        } while ( minuto < 1 || cin.fail());

//Se asigna un costo segun la duracion de la llamada

        if ( minuto >= 1 && minuto <= 10) {

        tppm = tppm + 0.05;

    }
    else if ( minuto >= 11 && minuto <= 15) {

        tppm = tppm + 0.08;

    }
    else {

        tppm = tppm + 0.10;

    }
    }
//Imprime el total a pagar por llamada/llamadas
    cout << " El total es:$ " << tppm;
}

void l()
{
	system("cls");
}

int cl (int clear)
{
	if (cin.fail() || clear <= 0)
    	{
			cin.clear(); // limpia la variable
        	cin.ignore(); // borra espacios y caracteres
        	cout << "Ingrese un numero valido." << endl;
        	system("pause"); // pausa el programa hasta que el usuario desee
    	}
    return clear;//retorna la variable ya revisada
}
