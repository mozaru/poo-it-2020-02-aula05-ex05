#include "TVet.h"
#include<iostream>
#include<algorithm>

using namespace std;

void TVet::ler()
{
   int range;
   double newElement;
   cout << "Entre com a quantidade de elementos(limite de 100): ";
   cin >> range;

   for (int i = 0; i < range; ++i)
   {
	cout << "Valor " << i + 1 << ": ";
        //cin >> v[i];
	cin >> newElement;
	numVectorArray.push_back(newElement);
   }
}
		
double TVet::maior()
{
    double highestElement = numVectorArray[0];
    for (int i = 0; i < numVectorArray.size(); ++i)
	if (numVectorArray[i] > highestElement)
		highestElement = numVectorArray[i];
     return highestElement;
}
double TVet::menor()
{
    double lowestElement = this->numVectorArray[0];
    for (int i = 0; i < numVectorArray.size(); ++i)
         if (numVectorArray[i] < lowestElement )
		lowestElement = numVectorArray[i];
    return lowestElement;
}

double TVet::mediaEx()
{
	double highestElement, lowestElement, sum;
        int count;
	highestElement = maior();
	lowestElement = menor();
	sum = 0;
        count = 0;
        for (int i = 0; i < this->numVectorArray.size(); i++)
		if (numVectorArray[i] != lowestElement &&	
		    numVectorArray[i] != highestElement)
		{
			sum += numVectorArray[i];
			count++;
		}
	 return count==0?0:sum/count;
}
