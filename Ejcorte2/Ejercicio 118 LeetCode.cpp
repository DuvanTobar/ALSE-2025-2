#include <iostream>
using namespace std;
int main()
{
    int a,numero;
    cout << "Bienvenido al programa que muestra las filas de el triangulo de Pascal!" << endl;
    cout << "Por favor digite el numero de filas que desea ver del triangulo de Pascal:"; cin >> a;
    cout << "Triangulo de Pascal:" << endl;
    for (int i=0;i<a;i++)
    {
        numero=1;
        for (int j=0;j<=i;j++)
        {
            cout << numero << " ";
            numero=numero*(i-j)/(j+1);
        }
        cout << endl;
    }
    cout << "***************FIN DEL PROGRAMA!*******************" << endl;
    return 0;
}