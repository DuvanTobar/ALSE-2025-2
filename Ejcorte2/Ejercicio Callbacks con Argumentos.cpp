#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[])
{

    printf("Bienvenido al programa para efectuar operaciones matematicas!\n");
    if (argc != 4)
    {
        printf("ERROR, se han digitado una cantidad erronea de datos para la ejecucion del programa.\n");
        printf("Por favor siga el siguiente formato:\n");
        cout << "./" << argv[0] << " <numero1> <operacion> <numero2>\n";
        printf("Las operaciones disponibles a realizar son:\n");
        cout << "Suma: +\nResta: -\nMultiplicacion: *\nDivision: /\n";
        return 1;
    }
    try
    {
        float num1 = stof(argv[1]);
        float  num2 = stof(argv[3]);
        string operacion = argv[2];
        float res;

        if (operacion == "+")
        {
            res=num1 + num2;
        }
        else if (operacion == "-")
        {
            res=num1 - num2;
        }
        else if (operacion == "*")
        {
            res=num1 * num2;
        }
        else if (operacion == "/")
        {
            if (num2 == 0)
            {
                printf("ERROR, no se puede dividir entre cero. Por favor intente de nuevo.\n");
                return 1;
            }
            res = num1 / num2;
        }

