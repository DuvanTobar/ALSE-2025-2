#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int npre;
    float pre, subt, cost, imp,impc;
    printf("Bienvenido al supermercado de la ECI!\nPor favor digite cada uno de los datos solcitados en el formato indicado.\n");
    printf("Tendra que digitar el numero de productos que va a comprar y el precio de cada uno de ellos.\n");
    cout << "Para compras mayores a $100, se aplicara un descuento del 10%. Todos los precios deben estar en dolares.\n";
    cout << "Por favor ingrese el numero de productos deseados:"; cin >> npre;
    subt=0;
    imp=0.08;
    for (int i = 1; i <= npre; i++)
    {
        cout << "Por favor ingrese el precio del producto " << i << ": $"; cin >> pre;
        subt = subt + pre;
    }
    impc=imp*subt;
    printf("REALIAZANDO CALCULOS...POR FAVOR ESPERE...\n");
    cout << fixed << setprecision(2);
    if (subt < 100)
    {
        cout << "El subtotal de su compra es: $" << subt;
        cout <<"\nLa compra tiene un costo adicional del 8%. Esto por temas de impuestos.";
        cout << "\nEl total de la compra realizada es:" << impc + subt;
        printf("\nGracias por su compra, esperamos que vuelva pronto!");

    }

}