#include <iostream>
using namespace std;

void llenar(int matriz[][5]);
void mostrar(int matriz[][5]);
void llenarInverso(int matriz[][5]);
void mostrarDiagonal(int matriz[][5]);

int main()
{
	int matriz[5][5];
	
	cout << "\t" << "\t" << " MATRIZ NORMAL " << endl;
	llenar(matriz);
	mostrar(matriz);
	
	cout << endl;
	cout << "\t" << "\t" << " MATRIZ INVERSA " << endl;
	llenarInverso(matriz);
	mostrar(matriz);
	
	cout << endl;
	cout << "\t" << "\t" << " TUS DIAGONALES " << endl;
	mostrarDiagonal(matriz);
	
	
	return 0;
	
}

void llenar(int matriz[][5])
{
	int n=1;
	
	for(int r=0; r<5; r++)
	{
		for(int c=0; c<5; c++)
			matriz[r][c]=n++;
	}
	
}

void mostrar(int matriz[][5])
{
	for(int r=0; r<5; r++)
	{
		for(int c=0; c<5; c++)
			cout << "\t" << matriz[r][c];
		cout << endl;
	}
	
}

void llenarInverso(int matriz[][5])
{
	int n=1;
	
	for(int c=4; c>=0; c--)
	{
		for(int r=4; r>=0; r--)
			matriz[r][c]=n++;
	}
	
}

void mostrarDiagonal(int matriz[][5])
{
	for(int r=0; r<5; r++)
		cout << "\t" << " " << matriz[r][r];
	
}

