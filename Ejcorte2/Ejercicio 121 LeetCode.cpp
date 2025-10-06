#include <iostream>
using namespace std;
int main()
{
    cout << "Bienvenido al programa para mostrar cual dia sera mejor para comprar y vender productos!" << endl;
    cout << "Se le solicitara digitar el numero de dias y un precio por dia, cada uno en formato entero." << endl;
    cout << "El programa mostrara cual sera el mejor dia para comprar y cual sera el mejor para vender, mostrando las ganancias." << endl;
    int n;
    cout << "Por favor digite el numero de dias:"; cin >> n;
    int vp[n];
    cout << "Por favor digite los precios por dia." << endl;
    for (int i=0;i<n;i++)
    {
        int dia=i+1;
        cout << "Ingrese el precio del dia " << dia << ":"; cin >> vp[i];
    }
    int maxgan=0;
    int diacompra=0;
    int diaventa=0;
    for (int i=0;i<n;i++)
    {
        for (int j=i+1;j<n;j++)
        {
            int gan=vp[j]-vp[i];
            if (gan>maxgan)
            {
                maxgan=gan;
                diacompra=i;
                diaventa=j;
            }
        }
    }
    if (maxgan>0)
    {
        cout << "El mejor dia para comprar es el dia " << diacompra+1 << " con un precio de " << vp[diacompra] << endl;
        cout << "El mejor dia para vender es el dia " << diaventa+1 << " con un precio de " << vp[diaventa] << endl;
        cout << "Las ganancias serian de: " << maxgan << endl;
    }
    else
    {
        cout << "No hay dias para comprar y vender con ganancias." << endl;
        cout << "Las ganancias totales serian de: 0" << endl;
    }
    cout << "Muchas gracias por usar el programa!" << endl;
    cout << "FIN DE LA EJECUCION" << endl;
    return 0;
}   
