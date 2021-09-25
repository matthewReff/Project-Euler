#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
int main()
{
	int firstPrimes[8] = { 2,3,5,7,11,13,17,19};
	int primeFactorExp[8] = { 0 };
	int factors;
	int bestFactors = 0;
	long long sumNum = 0;
	bool validPass;
	cout << fixed;
	for (int i = 2; i < 1000000; i++)
	{
		int factors = 1;
		for (int j = 0; j < 8; j++)
		{
			primeFactorExp[j] = 0;
		}
		sumNum = (pow(i, 2) + i) / 2;
		validPass = true;
		while (sumNum != 1 && validPass)
		{
			validPass = false;
			for (int j = 0; j < 8; j++)
			{
				if (sumNum % firstPrimes[j] == 0)
				{
					sumNum = sumNum / firstPrimes[j];
					primeFactorExp[j] = primeFactorExp[j] + 1;
					validPass = true;
				}
			}
		}
		for (int j = 0; j < 8; j++)
		{
			factors *= (primeFactorExp[j] + 1);
		}

		if (factors > 499)
		{
			cout << "Found " << (pow(i, 2) + i) / 2;
			return 0;
		}
	}
	return 0;
}