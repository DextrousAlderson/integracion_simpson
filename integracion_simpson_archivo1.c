/*
para este problema lo mas seguro es que tenga que hacer una lista de nodos doblemente ligados para poder acceder al nodo anterior y
usar...
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~nodo->lim_Inf=nodo->ant->lim_Sup~~~~~~~~~~~~~~~~~~~~~~~~~~
~~~~~~~~~~~~~~~~nodo->Area=nodo->ant->Area+(sustitucion de limites en funcion)~~~~~~~~~~~~~~

-------------------------------------------------------
 lim_Inf | lim_Sup | Area || lim_Inf | lim_Sup | Area |
         |         |      ||         |         |      |
    0    |    0    |   0  ||    0    |  0.02   | 0+() |
         |         |      ||         |         |      |
         |         |      ||         |         |      |
-------------------------------------------------------
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define funcion
typedef struct nodo
{
	float lim_Inf;
	float lim_Sup;
	float Area;
}TNodo;
int inicia_Matriz (TNodo Arr[10][11])
{
	float Aux
	Arr[0][0]->lim_Inf=0;
	Arr[0][0]->lim_Sup=0;
	Arr[0][0]->Area=0;
	Aux=Arr[0][0]->lim_Sup;
	for (int j=0;j<11;++j)
	{
		for (int i=1;i<10;++i)
		{
			Arr[i][j]->lim_Inf=Aux;
			Arr[i][j]->lim_Sup=Arr[i][j]->lim_Inf+0.01;
			Aux=Arr[i][j]->lim_Sup;
			Arr[i][j]->Area=0;
		}
	}

}
void Calc_Area(TNodo Arr[10][11]) 
{
	for (int j=0; j<11; ++j)
	{
		for (int i=0;i<10;++i)
		{
/*~~~~~~~~~~~~~~~~~~~~~~APLICACION DE LA FORMULA SIMPSON 3/8~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
float sumatoria1;
float sumatoria2;
float sumatoria3;
float s1;
float s2;
float s3;
float total;
for (int k=1;k<=n-2;k+3)
{
	sumatoria1=sumatoria1+
}
s1=3*sumatoria1;
for (int k=2;k<=n-1;k+3)
{
	sumatoria2=sumatoria2+
}
s2=3*sumatoria2;
for (int k=3;k<=n-3;k+3)
{
	sumatoria3=sumatoria3+
}
s3=2*sumatoria3;
/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
		}
	}
}
/*
(1/sqrt(2*3.1416))*(pow(euler,-x2/sabe que vergas))
            sqrt para raiz
            pow potencia   pow(valor,potencia)
            fabs calcular el valor absoluto



I=(3/8)h [f(x0)+f(xn)+
(3(SUMATORIA desde k=1 hasta n-2 con intervalo de 3)de f(xk))+
(3(SUMATORIA desde k=2 hasta n-1 con intervalo de 3)de f(xk))+
(2(SUMATORIA desde k=3 hasta n-3 con intervalo de 3)de f(xk))]
*/