#include <iostream>
#include <string>
using namespace std;
int main()
{
    string lc;
    cout << "Bienvenido al programa para calcular el numero de una columna de Excel!" << endl;
    cout << "A continuacion se presentaran las instrucciones y las restricciones del programa." << endl;
    cout << "El programa le solicitara digitar una letra o un conjunto de letras que representen una columna en Excel." << endl;
    cout << "Por favor digite la letra o la combinacion de letras en mayuscula." << endl;
    cout << "De no ser asi, el programa no funcionara correctamente." << endl;
    cout << "De igual forma tenga en cuenta que una combinacion mayor a 3 letras no es una columna valida en Excel." << endl;
    cout << "Por favor digite la letra o combinacion de letras que representan la columna en Excel:" ; cin >> lc;
    int resultado=0;
    for (int i=0;i<lc.size();i++)
    {
        resultado=resultado*26+(lc[i]-'A'+1);
    }
    cout << "El numero correspondiente a la columna de Excel " << lc << " es: " << resultado << endl;
    cout << "***************FIN DEL PROGRAMA!*******************" << endl;
    return 0;
}   