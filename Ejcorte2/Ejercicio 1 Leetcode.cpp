#include <iostream>
using namespace std;
int main()
{
    int a,b;
    printf("Bienvenido al programa que calcula los indices de 2 numeros para sumarlos!");
    cout << "\nPor favor digite el numero de elementos que desea tener en el arreglo:"; cin >> a;
    int vnum[a];
    bool hallado=false;
    for (int i=0; i<a; i++)
    {
        cout << "\nDigite el numero " << i+1 << " del arreglo:"; cin >> vnum[i];
    }
    cout << "\nAhora digite el valor del numero que desea calcular con la suma de indices:"; cin >> b;
    for (int i=0; i<a; i++){
        for (int j=0; j<a; j++){
            if (vnum[i]+vnum[j]==b && i!=j && !hallado){
                cout << "\n!Indices encontrados! Son: " << i << " y " << j << endl;
                cout << "La suma de los numeros en esos indices es:" << vnum[i] + vnum[j] << endl;
                printf("La suma de ambos valores del indice coincide con su valor solicitado!");
                hallado=true;
            }
        }
    }
    if (!hallado)
    {
        cout << "\nNo se encontraron indices que sumen el valor solicitado." << endl;
        printf("Intente con otros valores.");
    }
    return 0;
}