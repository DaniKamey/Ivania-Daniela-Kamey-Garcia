#include<iostream>
using namespace std;
void menu();
void mostrar(int mat[][20],int r,int c);
void avanzar(int mat[][20],int espacio,int &r, int &c,int pluma,int horizonte);
void derecha(int &horizonte);
void izquierda(int &horizonte);

int main()
{
	int mat[20][20]={{0}};
	int opc;
	int pluma;
	int r=0;
	int c=0;
	int espacio=0;
	int horizonte=1;

        do
	{
		menu();
		cin>>opc;
		switch(opc)
		{
			case 1:
				pluma=0;
				mat[r][c]=pluma;
			break;
			
			case 2:
				pluma=1;
				mat[r][c]=pluma;
			break;
			
			case 3:
				derecha(horizonte);
			break;
			
			case 4:
				izquierda(horizonte);
			break;
			
			case 5:
				cout<<"cuantos espacios quieres avanzar: ";
				cin>>espacio;
				avanzar(mat,espacio,r,c,pluma,horizonte);
			break;
			
			case 6:
				mostrar(mat,r,c);
			break;

		}
	}while(opc !=7);
	
	return 0;

}

void menu()
{
cout<<" Comandos: "<<endl;
		cout<<"1 Pluma arriba:"<<endl;
		cout<<"2 Pluma abajo:"<<endl;
		cout<<"3 Girar a la derecha:"<<endl;
		cout<<"4 Girar a la izquierda: "<<endl;
		cout<<"5 avanzar espacios:" <<endl;
		cout<<"6 Imprime el arreglo de 20 por 20:"<<endl;
		cout<<"7 Fin de datos (Centinela): "<<endl;
		cout<<"Ingresa el numero de la opcion: "<<endl;

}

void mostrar(int mat[][20],int r,int c)
{
	for(int r=0;r<20;r++)
	{
		for(int c=0;c<20;c++)
		{
			cout<<mat[r][c]<<" ";
		}
		cout<<endl;
	}
}

void avanzar(int mat[][20],int espacio,int &r,int &c,int pluma,int horizonte)
{
	if(horizonte==1)
	{
		espacio+=c;
			for(;c<espacio;c++)
			{
				if(c<20)
					if(pluma==1)
					{
						mat[r][c]=pluma;
					}
			}
		if(c>20)
		{
			c=19;
		}
	}
	else
	if(horizonte==2)
	{
		espacio+=r;
		for(;r<espacio;r++)
		{
			if (r<20)
				if(pluma==1)
				{
					mat[r][c]=pluma;
				}
		}
		if(r>20)
		{
			r=19;
		}
	}
	else
		if(horizonte==3)
		{
			cout <<"h c esp"<<horizonte<<" "<<c<<" "<<espacio<<endl;
			cin.get();
			cin.get();
			espacio=c-espacio;
			for(;c>espacio;c--)
			{
				if (c>=0)
					if(pluma==1)
					{
						mat[r][c]=pluma;
					}
			}
			if(c<0)
			{
				c=0;
			}
		}
	else
		{
			espacio=r-espacio;
			for(;r>espacio;r--)
			{	if (r>=0)
					if(pluma==1)
					{
						mat[r][c]=pluma;
					}
			}
			if(r<0)
			{
				c=0;
			}
		}
}

void derecha(int &horizonte)
{
	horizonte++;
	if(horizonte>4)
	   horizonte=1;
}

void izquierda(int &horizonte)
{
	horizonte--;
	if(horizonte<1)
	   horizonte=4;
}
