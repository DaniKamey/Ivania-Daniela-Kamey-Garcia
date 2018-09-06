#include <iostream>
#include <string>

using namespace std;

int main()
{
	int numero;
	int factorial = 1;
	int i = 1;

	cout << "Agregue un numero para saber su factorial:" << endl;
	cin >> numero;

	while(i<=numero)
    {

		factorial*=i;

		i++;

	}
	    cout << "El factorial de: " << numero <<"!"<<" es = " << factorial << endl;




 return 0;
}
