#include <iostream>
using namespace std;



main()
{
    int a,b,c,d,e;
    int valor;

        cout<<"introduce un valor de 5 cifras: "<< endl;
        cin>>valor;

        a = (valor / 10000) ; // primer digito
        b = (valor / 1000) %10; // segundo digito
        c = (valor / 100) % 10; // tercer digito
        d = (valor / 10) % 10; // cuarto digito
        e = valor % 10; // quinto digito

        cout<<a<<"  "<< b <<"   "<< c <<"   "<<d <<"   " <<e;


    return 0;
}
