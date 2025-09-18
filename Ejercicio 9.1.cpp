#include <iostream>
using namespace std;
int main()
{
    int a,b,c,mcd;
    printf("Bienvenido al programa que calcula el maximo comun divisor de 2 numeros.");
    printf("\nEn este programa se utiliza el algoritmo de Euclides para calcular el maximo comun divisor.");
    printf("\nSe le Solicitara digitar 2 numeros enteros divisibles entre si y respetar el numerador y denominador(No colocar 0).");
    cout << "\nDigite el primer numero:"; cin >> a;
    cout << "\nAhora digite el segundo numero:"; cin >> b;
    while (a%b!=0)
    {
        c=a%b;
        a=b;
        b=c;
    }
    if (a%b==0)
    {
        mcd=b;
        cout << "\nEl maximo comun divisor entre los numeros digitados es:" << mcd;
        printf("\nGracias por ejecutar el programa!");
        printf("\n*****************FIN DE LA EJECUCION*****************");
    }
    return 0;
}