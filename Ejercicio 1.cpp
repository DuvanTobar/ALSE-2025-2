#include <iostream>
using namespace std;
int main()
{
    int suma, v1[5];
    printf("Bienvenido al programa de suma de elementos de un vector!");
    cout << "\nPor favor ingrese 5 numeros enteros:";
    for(int i=0;i<5;i++){
        cin >> v1[i];
    }
    suma = 0;
    for(int i = 0; i < 5; i++){
        suma =suma + v1[i];
    }
    cout << "La suma de los elementos del vector es: " << suma;
    printf("\n***************FIN DEL PROGRAMA!*******************");
    return 0;
}