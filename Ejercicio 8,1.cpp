#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    printf("Bienvenido al programa para calcular el interes compuesto!\nPor favor digite los datos en el formato solicitado.\n");
    float ci, tia;
    int n,t;
    double mf;
    cout << "\nPor favor ingrese la cantidad inicial de capital que desea invertir (Pesos Colombianos):";
    cin >> ci;
    cout << "\nAhora ingrese la tasa de interes anual aplicada (Importante colocarla en formato decimal, por ejemplo 5% = 0.05):";
    cin >> tia;
    cout << "\nAhora ingrese el numero de veces que se aplicara el interes anualmente:";
    cin >> n;
    cout << "\nFinalmente ingrese la cantidad de años en la cual dejara invertido su dinero:";
    cin >> t;
    mf=ci*pow(1+tia/n,n*t);
    printf("\nRealizando calculos.......Por favor espere...\n");
    cout << "\nEl monto final es:" << mf;
    printf("\nGracias por usar el programa!");
    printf("\nFIN DE LA EJECUCION.");
    return 0;
}