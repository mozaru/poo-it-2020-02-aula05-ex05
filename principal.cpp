#include<iostream>
#include "TVet.h"



/*faça um programa que leia n numeros reais (no maximo 100)
e mostre a media sem os valores extremos(maior e menor valor)
ex: 1 7 5 1 3 5 7 3
maior = 7
menor = 1
media sem extremos = (5 + 3 + 5 + 3) / 4 = 16 / 4 = 4*/


using namespace std;

int main()
{
	TVet v;
	v.ler();
	cout << "Maior:" << v.maior() << endl;
	cout << "Menor:" << v.menor() << endl;
	cout << "Media sem extremos:" << v.mediaEx() << endl;
	system("PAUSE");
	return 0;
}