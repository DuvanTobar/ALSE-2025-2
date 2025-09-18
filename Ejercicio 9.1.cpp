#include <iostream>
using namespace std;
int main()
{
    int a,b,c,d;
    printf("Bienvenido al programa que calcula el maximo comun divisor de 2 numeros.");
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
        d=b;
        cout << "\nEl maximo comun divisor es: " << d;
    }
    return 0;
}