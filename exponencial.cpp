#include <iostream>
using namespace std;

int main()
{
	int numero;
	int potencia;
	int exponente=1;
	int i=1;

	cout << "Ingrese un numero a elevar:  " <<endl;
	cin>>numero;

	cout<<"Ingresa la pontencia: "<< endl;
	cin>>potencia;


	while(i <= potencia)
    {
		exponente *= numero;
		i++;
	}

	cout<<"Tu resulatado es: "<<exponente << endl;

	return 0;

}
