#include<iostream>
#include<time.h>
#include<stdlib.h>

using namespace std;

int tirador1(int vec[],int jugador1);
int tirador2(int vec[],int jugador2);
int dado();

int main()
{
	int vec[100]={0};
	int jugador1=0;
	int jugador2=0;
	srand(time(NULL));
//Serpientes

	vec[10]=-3;
	vec[15]=-10;
	vec[20]=-6;
	vec[30]=-4;
	vec[40]=-2;
	vec[50]=-8;
	vec[60]=-40;
	vec[70]=-50;

//Escaleras

	vec[5]=+11;
	vec[25]=+10;
	vec[35]=+15;
	vec[45]=+3;
	vec[55]=+8;
	vec[65]=+10;
	vec[75]=+20;

while(jugador1<100&&jugador2<100)
{
		jugador1=tirador1(vec,jugador1);
		jugador2=tirador2(vec,jugador2);
		cout<<"Jugador 1:"<<jugador1<<endl<<"Jugador 2:"<<jugador2<<endl<<endl;
}

	if(jugador1>=100 && jugador2>=100)
{
		cout<<"Hay empate";
}
	else
	if(jugador1>jugador2)
{
	cout<<"Gana jugador 1";
}
	else
	cout<<"Gana jugador 2";

	return 0;
}

int dado()
{
	int n;
	return n=1+rand()%6;
}

int tirador1(int vec[], int jugador1)
{
	jugador1+=dado();
	jugador1+=vec[jugador1];
	return jugador1;
}

int tirador2(int vec[], int jugador2)
{
	jugador2+=dado();
	jugador2+=vec[jugador2];
	return jugador2;
}
