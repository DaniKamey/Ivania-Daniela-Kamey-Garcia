#include <iostream>
using namespace std;

float potencia (float base, int expo);
int potencia (int base, int expo);
float seno (int x,int n);
int factorial (int n);
float ln (int x,int n);
float cos (int x, int n);
char menu (char letra);


int main ()
{
    char letra;

        cout << menu (letra) ;

    return 0;
}

char menu (char letra)
{

    cout << "!!! FAVOR DE INGRESAR MAYUSCULAS !!! " <<endl;

    do
    {
        cout <<"ingresa la letra correspondiente para realizar tu operacion deseada: "<< endl;
        //cout << "potencial con decimal" << "    "<< 'D' << endl;
        cout << "potencial en enteros" << "    "<< 'P' << endl;
        cout << "factorial" << "    "<< 'F' << endl;
        cout << "seno" << "    "<< 'S' << endl;
        cout << "logaritmo natural" << "    "<< 'L' << endl;
        cout << "coseno" << "    "<< 'C' << endl;

        cin >> letra;


    }while ( ! (letra >= 'A' && letra <= 'Z'));


    switch (letra)
    {
        //case 'D':
            //cout << potencia (2.5,3) << endl;

        case 'P':
            cout << potencia (2,3) <<endl;

        case 'F':
            cout << factorial (3) << endl;

        case 'S':
            cout << seno (2,3) <<endl;

        case 'L':
            cout << ln (2,3) << endl;

        case 'C':
            cout << cos (2,3) <<endl;

        default:
            cout << "vuelva a intentar";
    }

    return letra;
}


float potencia (float base, int expo)
    {
        float pot =1;

        for(int i=1; i<=expo;i++)
        {
            pot *=base;
        }

        return pot;
    }

int potencia (int base, int expo)
    {
        int pot =1;

        for(int i=1; i<=expo;i++)
        {
            pot *=base;
        }

        return pot;
    }


float seno (int x,int n)
    {
        int ov=1;
        float sum=0;
        float sig=1;

            for(int i = 1; i <= n; i ++)
            {
                sum += (float) potencia (x,ov) / factorial (ov) * sig;

                ov+=2;
                sig *= -1;
            }
            return sum;
    }


int factorial (int n)
{
    int factorial =1;

    for(int i=1; i<= n; i++)
    {
        factorial *= i;
    }
    return factorial;
}

float ln (int x,int n)
{
    float sum =0;

        for(int i=0; i<=n; i++)
        {
            sum += (1.0/i) * potencia ((float) (x-1.0) / x, i);

        }

        return sum;

}

float cos (int x, int n)
{
    int ov = 0;
    int sum= 0;
    int sig =1;

        for(int i=1; i<=n; i++)
        {
            sum = (float) potencia (x, ov)/ factorial (ov) * sig;

            ov += 2;
            sig *= -1;
        }

        return sum;
}
