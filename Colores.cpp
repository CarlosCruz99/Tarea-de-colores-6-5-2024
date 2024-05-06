#include <iostream>
using namespace std;
int main(void){
    char n='0';
    cout<< "Ingrese una letra que represente un color: \n";
    cin>> n;
        switch(n)
    {
        case 'R':
        cout<< "El color es rojo \n";
        break;

        case 'Y':
        cout<< "El color es amarillo \n";
        break;

        case 'B':
        cout<< "El color es azul \n";
        break;

        case 'W':
        cout<< "El color es blanco \n";
        break;

        case 'K':
        cout<< "El color es negro \n";
        break;

        case 'C':
        cout<< "El color es cian \n";
        break;

        case 'G':
        cout<< "El color es verde \n";
        break;

        default:
        cout<< "La letra no corresponde a ningún número";
        break;
    
    }
}