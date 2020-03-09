#pragma once
#include<vector>
#include<iostream>
#include<algorithm>

class TVet
{
	//Constants
	private:
		const double arrayLimit = 100;

	// Properties
	private:
		std::vector<double> numVectorArray;
		std::vector<double> cleanVectorArray;
		double sum;
		double highestElement;
		double lowestElement;
		double newElement;
		int range;
		

	// Getters & Setters
	public:	
		double getHighest() const { return this->highestElement; }
		double getLowest() const { return this->lowestElement; }
	private:
		void setHighest(double inputDouble) { this->highestElement = inputDouble; }
		void setLowest(double inputDouble) { this->lowestElement = inputDouble; }

	// Methods
	public:
		void TVet::ler()
		{
			std::cout << "Entre com a quantidade de elementos (limite de 100): ";
			std::cin >> range;

			for (int i = 0; i <= (range - 1); ++i)
			{
				std::cout << "Valor " << i + 1 << ": ";
				std::cin >> this->newElement;
				this->numVectorArray.push_back(this->newElement);
			}

			if (this->numVectorArray.size() > 100)
			{
				std::cout << "Limite atingido, apenas os 100 primeiros serão contados.";
				this->numVectorArray.resize(100);
			}
		}
		
		double TVet::maior()
		{
			this->setHighest(this->numVectorArray[0]);
			for (unsigned int i = 0; i < numVectorArray.size(); ++i)
			{
				if (this->getHighest() < numVectorArray[i])
				{
					this->setHighest(numVectorArray[i]);
				}
				else
				{
					continue;
				}
			}
			return this->getHighest();
		}
		double TVet::menor()
		{
			this->setLowest(this->numVectorArray[0]);
			for (unsigned int i = 0; i < numVectorArray.size(); ++i)
			{
				if (this->getLowest() > numVectorArray[i])
				{
					this->setLowest(numVectorArray[i]);
				}
				else
				{
					continue;
				}
			}
			return this->getLowest();
		}

		double TVet::mediaEx()
		{
			

			for (unsigned int i = 0; i < this->numVectorArray.size(); ++i)
			{
				if (this->numVectorArray[i] == this->getHighest() || this->numVectorArray[i] == this->getLowest())
				{
					continue;
				}
				else
				{
					this->cleanVectorArray.push_back(this->numVectorArray[i]);
				}
					
			}

			for (unsigned int i = 0; i < this->cleanVectorArray.size(); ++i)
			{
				this->sum += this->cleanVectorArray[i];
			}

			double returnFloat = this->sum / this->cleanVectorArray.size();

			return returnFloat;
		}
};

