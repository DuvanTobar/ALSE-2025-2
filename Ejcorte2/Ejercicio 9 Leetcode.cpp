#include <iostream>
using namespace std;
bool npal(int b)
{
    int ori = b;
    int rev = 0;
    if (b < 0)
    {
        return false;
    }
    while (b > 0)
    {
        int val = b % 10;
        rev = rev * 10 + val;
        b = b / 10;
    }
    return (ori == rev);
}

int main()
{
    int a;
    cout << "Bienvenido al programa para saber si su numero es palindromo!" << endl;
    cout << "Por favor ingrese un numero entero:" << endl;
    cin >> a;
    if (npal(a))
    {
        cout << "Su numero es palindromo!" << endl;
    }
    else
    {
        cout << "Su numero no es palindromo." << endl;
    }
    printf("*******************FIN DE LA EJECUCION*******************\n");
    return 0;
} 