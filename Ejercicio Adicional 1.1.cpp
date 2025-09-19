#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int npre;
    float pre, subt, cost, imp,impc,desc,desct;
    printf("Bienvenido al supermercado de la ECI!\nPor favor digite cada uno de los datos solcitados en el formato indicado.\n");
    printf("Tendra que digitar el numero de productos que va a comprar y el precio de cada uno de ellos.\n");
    cout << "Para compras mayores a $100, se aplicara un descuento del 10%. Todos los precios deben estar en dolares.\n";
    cout << "Por favor ingrese el numero de productos deseados:"; cin >> npre;
    subt=0.0;
    imp=0.08;
    for (int i = 1; i <= npre; i++)
    {
        cout << "Por favor ingrese el precio del producto " << i << ": $"; cin >> pre;
        subt = subt + pre;
    }
    impc=imp*subt;
    cost=subt+impc;
    printf("REALIAZANDO CALCULOS...POR FAVOR ESPERE...\n");
    cout << fixed << setprecision(2);
    if (cost <= 100.00)
    {
        cout << "El subtotal de su compra es: $" << subt;
        cout <<"\nLa compra tiene un costo adicional del 8%. Esto por temas de impuestos.";
        cout << "\nEl total de la compra realizada es:" << "$" << cost;
        printf("\nGracias por su compra, esperamos que vuelva pronto!");
    }
    else 
    {
        desc=cost*0.10;
        desct=cost-desc;
        cout << "El subtotal de su compra es: $" << subt;
        cout <<"\nLa compra tiene un costo adicional del 8%. Esto por temas de impuestos.";
        cout << "\nEl total de la compra realizada es:" << "$" << cost;
        cout << "\nAdemas, por haber superado los 100$ en su compra, se le aplico un descuento del 10%.";
        cout << "\nEl nuevo total de su compra es: $" << desct << "!";
        cout << "\nSu ahorro con nosotros fue de: $" << desc << "!";
        printf("\nGracias por su compra, esperamos que vuelva pronto!");
    }
    return 0;

}