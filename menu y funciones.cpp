#include <iostream>
using namespace std;


float tabular1(int num, int valor);
float tabular(int num, int y);
float formula1(int x);
float formula3(int x);
float formula2(int x,int y);


int main()
{

        int num,valor,y;

        cout << "1.- f(x) = 3√(2x^2) / 2x - 3" <<endl;
        cout << "2.- f(x,y) = 2xy - 3y" << endl;
        cout << "3.- x>0 2x^3 o x<=0 3x^2\n>" <<endl;

        cout << "elige una opcion" << endl;
        cin >> num;
        cout << endl << endl;


    do
    {
        if (num == 1 || num == 3)
        {
            cout <<"para la funcion 1 y 3, tendras que agregar el valor maximo a tabular"<<endl;
            cin>> valor;

            tabular1(num,valor);

        }
        else
        {
            cout <<"Para la formula 2, es necesario agregar un valor para la variable Y "<<endl;
            cin >> y;
            tabular(num,y);
        }

    }while(num < 1 || num > 3);




    return 0;
}


float formula1(int x)
{
    float a,b;
    float total = 0;

    float tercio=0.3333;

            a = 2 * ( x * x );
            b = a * tercio;
            total = b /( ( 2 * x ) -3 );

    return total;

}

float formula2 (int x,int y)
{
    float a,b;
    float total = 0;

    a = 2 * ( ( x ) * ( y ) );
    b = 3 * ( y );
    total = a - b;

    return total;


}

float formula3(int x)
{
    float total = 0;


        if(x>0)
        {
            total= 2 *( x * x * x );
        }
        else
        {
            if (x<=0)
            {
              total= 3 *(x*x);
            }

        }

    return total;


}


float tabular1(int num, int valor)
{

       if(num == 1)
       {
           cout<<"x\tf(x)\n";

           for(int i=0; i<=valor; i++)
           {
               cout << i << "    " << formula1(i) << endl;
           }
       }
       else
       {
           cout<<"x\tf(x)\n";

           for(int i=0; i<=valor; i++)
           {
               cout << i << "    " << formula3(i) <<endl;
           }
       }
}

float tabular(int num,int y)
{
   if(num == 2)
   {
       cout<<"x\tf(x)\n";
        for(int i=1; i<=5; i++)
        {
            cout << i <<& y << "   " <<formula2(i, y) <<endl;
        }
   }

}
