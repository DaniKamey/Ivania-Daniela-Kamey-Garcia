#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;

//usar en caso de emergencia en caso de estar salvando el semestre


void histograma (int vec[] , int n);
int dados();



int main()
{
    srand(time(NULL));

    int dado=0;
    int vec[11]={0};

    for(int i=0; i<100;i++)
    {
        dado = dados();

        for(int a=0; a<11; a++)
        {
            if (dado == a+2)
            {
                vec[a]++;
            }
        }
    }

    histograma(vec,11);



    return 0;
}

void histograma (int vec[], int n)
{


    for (int i=0; i<n; i++)
    {
        cout << i+2 << "\t" ;
        for(int a=0; a<vec[i]; a++)
        {
          cout << " * ";
        }
        cout << endl;
    }
}


int dados()
{
    int dado=0;


    for(int i=0; i<2; i++)
    {
        dado +=1 + rand()%(6);
    }


    return (dado);
}



