#include <iostream>
using namespace std;
int main()
{
    int n1,n2;

    cout << "Ingrese un numero: ";
    cin >> n1;

    cout << "Ingrese otro numero: ";
    cin >> n2;

    if(n1 > n2)
    {
        //si el modulo es cero, entonces es multiplo

        if(n1%n2 == 0)
        {
            cout << "El numero " << n1 << " SI es multiplo de " << n2;
        }

        else
        {
            cout << "El numero " << n1 << " NO es multiplo de " << n2;
        }

    }
    else
        {
        if(n2%n1 == 0)
        {
            cout << " El numero " << n2 << " SI es multiplo de " << n1;
        }

        else
        {
            cout << " El numero " << n2 << " NO es multiplo de " << n1;
        }

    }

    return 0;
}

