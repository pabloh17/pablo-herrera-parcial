#include <iostream>
using namespace std;
int main(){

/**
1)
Escribe un programa que permita al usuario ingresar un año y determine si ese año es bisiesto.
Un año es bisiesto si es divisible entre 4, pero no entre 100, excepto si es divisible entre 400.

2)
Escribe un programa que permita al usuario ingresar un número y luego muestre la tabla de multiplicar de ese número en orden descendente, desde 10 hasta 1.

3)
Escribe un programa que imprima los números hasta el límite que decida el usuario (mayor a 15). Sin embargo, para los múltiplos de 3 imprime "Fizz", para los múltiplos de 5 imprime "Buzz"
*/
    int anio;
    int opcion;
    int multiplicacion;
    do{
        cout<<"menu de opciones\n";
        cout<<"1. Determinar si un año es bisiesto\n";
        cout<<"2. Tabla de multiplicar inversa\n";
        cout<<"3. FizzBuzz\n";
        cout<<"4. salir\n";
        cin>> opcion;
        switch(opcion){
            case 1:

                cout<<"ingresar un anio: ";
                cin>>anio;

                if (anio % 100 != 0){
                    cout<<"no es bisiesto";
                }
                    else if (anio % 100 == 0 || anio % 400 == 0){
                        cout<<"es bisiesto";
                    }
            case 2:
                cout<<"ingresar un numero: ";
                cin>>multiplicacion;
                for(int i = 1; i <= 10; i++){
                    cout << multiplicacion << " x " << i << " = " << multiplicacion * i << endl;
                }

}

                break;



        }

while(opcion!=0);
return 0;
}
