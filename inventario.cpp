#include<iostream>
using namespace std;
void llenarmat(int mat[][5],int v,int p,int t);
int mostrarmat(int mat[][5]);
void sumavendedor(int mat[][5]);
void sumaproducto(int mat[][5]);

int main()
{
	int mat[6][5]={{0}};
	char opc;
	int v,p,t;

	do
	{

	cout<<"Numero de vendedor: ";
	cin>>v;
	cout<<"Numero de producto: ";
	cin>>p;
	if (v>4||p>5)

{
		cout<<"No existe ese registro ";
		return 0;
}
else
{

	cout<<"Total ";
	cin>>t;
	cout<<"Deseas agregar mas (s-n) :";
	cin>>opc;
	llenarmat(mat,v,p,t);
	}
	}
	 while(opc=='s');
	sumavendedor(mat);
	sumaproducto(mat);
	mostrarmat(mat);


	return 0;
}

void llenarmat(int mat[][5],int v,int p,int t)
{
	mat[p-1][v-1]+=t;
}


int mostrarmat(int mat[][5])
{
	int r,c;
	for(r=0;r<6;r++)
	{
		for(c=0;c<5;c++)
		{
			cout<<"\t" << mat[r][c]<<" ";
		}
		cout<<endl;
	}
}


void sumavendedor(int mat[][5])
{
	int r,c;
	for(r=0;r<5;r++)
	{
		for(c=0;c<4;c++)
		{
			mat[5][c]+=mat[r][c];
		}
	}
}

void sumaproducto(int mat[][5])
{
	int r,c;
	for(r=0;r<5;r++)
	{
		for(c=0;c<4;c++)
		{
			mat[r][4]+=mat[r][c];
		}
	}
}
