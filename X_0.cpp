/// Creado por: Carlos Manuel Guevara Hernandez
/// Carnet: GH18015
/// Fecha de creacion: 03 de octubre de 2018
#include <iostream> ///ingreso y salida de datos
#include <windows.h> ///efectos de la consola
#include <iomanip> ///incluye la precision de decimales

using namespace std;


string ticTactoe[3][3]; ///variable global para facilidad al codificar;


int cl(int clear); ///verifica que el campo ingresado sea correcto
void l(); ///limpia la pantalla

char changeT(char turn);
char ganar(char turn);

int main() /// Funcion principal
{
    /// Inicio del programa

    int continuar = 1;
	bool win = false;
	char turn = 'O';
	int coordx;
	int coordy;

	/// Ciclo for para la verificacion del numero de casilla
	/// Formacion del cuadro de juego

	for(int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 3; j++)
		{
			ticTactoe[i][j] = ".";

		}
	}
	cout << "			Bienvenido al juego de tres en raya" << endl << endl;

	while(win == false)
	{
	cout << "			   	        X         " << endl;
	cout << "       	        0         		1  		        2" << endl;

        for(int i = 0; i < 3; i++)
        {
        for(int j = 0; j < 3; j++)
            {
                if (j != 2)
            {

               cout << "         	" << ticTactoe[i][j]<< " 	   |";
            }
            else{
               cout << "        	" << ticTactoe[i][j]<< " 	    ";
            }
            }

             if ( i != 2 ){
                      cout << " " << i << endl;
                      cout << "    _______________________|_______________________|_______________________" << endl;
                      cout << "                           |		           | " << endl;
             }else {
                cout << " " << i << endl;
             }

        }


turn = changeT(turn); ///Variable para indicar el turno del jugador


	cout << endl << endl << "turno del jugador " << turn << ": " << endl;
	do///Ciclo do-while para verificar que el dato sea el correcto
	{
	cout << "Ingrese la coordenada x: ";
	cin >> coordx;
	coordx = cl(coordx);
	}while(coordx < 0 || coordx > 2); /// Verificacion de que el dato ingresado es correcto

	do///Ciclo do-while para verificar que el dato sea el correcto
	{
	cout << "Ingrese la coordenada y: ";
	cin >> coordy;
	coordy = cl(coordy);
	}while(coordy < 0 || coordy > 2);/// Verificacion de que el dato ingresado es correcto

	if(turn == 'X') /// Codicion if para el jugador X
	{
	for(int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 3; j++)
		{
			if(i == coordy && j == coordx)
			{
				if(ticTactoe[i][j] != ".")
				{ /// Se coloca una codicion de que si la coordenada es != "."
                  /// Dira que esa casilla ya esta ocupada
				cout << "Esa casilla ya esta ocupada" << endl;
				system("pause");/// Indica al programa detenerse hasta que el usuario lo indique
				turn = 'O';
				}
				else
				{ /// Aqui se indica que si no es != de "." se coloque X
				ticTactoe[i][j] = "X";
				}
			}
        }
	}
}
    /// En este apartado se usa la misma verificacion del jugador X
	else if(turn == 'O')
	{
	for(int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 3; j++)
		{
			if(i == coordy && j == coordx)
			{
				if(ticTactoe[i][j] != ".")
				{
				cout << "Esa casilla ya esta ocupada" << endl;
				system("pause");
				turn = 'X';
				}
				else
				{
				ticTactoe[i][j] = "O";
				}
			}
		}
	}
	}

for(int i = 0; i < 3; i++)
{

	if(ticTactoe[i][0] ==  ticTactoe[i][1] && ticTactoe[i][0] == ticTactoe[i][2] && ticTactoe[i][0] != ".");
	{
	    l();
	    cout << "El jugador " << turn << " gana." << endl;
		win = true;
		ganar(turn); /// Verificiacion de que si existe el mismo simbolo en una misma columna y el jugador que dio ese turno gana

	}
	else if(ticTactoe[0][i] ==  ticTactoe[1][i] && ticTactoe[0][i] == ticTactoe[2][i] && ticTactoe[0][i] != ".")
	{
	    l();
	    cout << "El jugador " << turn << " gana." << endl;
		win = true;
		ganar(turn); /// Verificacion de que si existe el mismo simbolo en una misma fila
	}

	else if( (ticTactoe[0][0] ==  ticTactoe[1][1] && ticTactoe[0][0] == ticTactoe[2][2] && ticTactoe[0][0] != ".")
				|| (ticTactoe[0][2] == ticTactoe[1][1] && ticTactoe[0][2] == ticTactoe[2][0] && ticTactoe[0][2] != ".") )
	{
        l();
	    cout << "El jugador " << turn << " gana." << endl;
		win = true;
		ganar(turn); /// Aqui se verifica que existan tres simbolos iguales en sentido diagonal
	}
}
    if ( ticTactoe[0][0] != "." && ticTactoe[0][1] != "." && ticTactoe[0][2] != "."
            && ticTactoe[1][0] != "." && ticTactoe[1][1] != "." && ticTactoe[1][2] != "."
                    && ticTactoe[2][0] != "." && ticTactoe[2][1] != "." && ticTactoe[2][2] != ".")
    {
        l();
        cout << "Es un empate." << endl;
        win = true;
        ganar(turn); /// En este apartado se verifica que si no existen ningun simbolo en diagonal, fila o columna es un empate
    }


    l();
	}


}

void l ()
{
    system ("cls");
}

char ganar(char turn)
{
    /// Hacemos uso de la funcion ganar para formar nuevamente el tablero de juego
	cout << "			   	        X         " << endl;
	cout << "       	        0         		1  		        2" << endl;

        for(int i = 0; i < 3; i++)
        {
        for(int j = 0; j < 3; j++)
            {
                if (j != 2)
            {

               cout << "         	" << ticTactoe[i][j]<< " 	   |";
            }
            else{
               cout << "        	" << ticTactoe[i][j]<< " 	    ";
            }
            }

             if ( i != 2 ){
                      cout << " " << i << endl;
                      cout << "    _______________________|_______________________|_______________________" << endl;
                      cout << "                           |		           | " << endl;
             }else {
                cout << " " << i << endl;
             }

}
system("pause"); /// El programa se detiene hasta que el usuario lo inque
}

int cl(int clear)
{
	if (cin.fail())
    	{
			cin.clear(); /// limpia la variable
        	cin.ignore(); /// borra espacios y caracteres
        	cout << "Ingrese un numero valido." << endl;
        	system("pause"); /// pausa el programa hasta que el usuario desee
        	clear = -1;
    	}
    return clear;///retorna la variable ya revisada
}

char changeT(char turn)
{
	if (turn=='X')
	{turn = 'O';}
	else {turn='X';}
	return turn;
}




