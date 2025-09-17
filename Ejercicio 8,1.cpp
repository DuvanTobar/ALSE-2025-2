#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    printf("Bienvenido al programa para calcular el interes compuesto!");
    float ci, tia;
    int n,t;
    double mf;
    cout << "Por favor ingrese la cantidad inicial de capital que desea invertir:";
    cin >> ci;
    cout << "Ahora ingrese la tasa de interes anual aplicada (Importante colocarla en formato decimal, por ejemplo 5% = 0.05):";
    cin >> tia;
    cout << "Ahora ingrese el numero de veces que se aplicara el interes anualmente:";
    cin >> n;
    cout << "Finalmente ingrese la cantidad de años en la cual dejara invertido su dinero:";
    cin >> t;
    mf=ci*pow(1+tia/n,n*t);
    printf("Realizando calculos.......");
    cout << "El monto final es:" << mf;
    printf("Gracias por usar el programa!");
    return 0;
}