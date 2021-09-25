#include "utilities.h"

//DOES NOT WORK PROPERLY, FIX PLEASE
int main()
{
	int i, j, sum;
	bool * abunCombo;
	abunCombo = new (nothrow) bool[28124];
	for (i = 0; i < 28124; i++)
	{
		abunCombo[i] = true;
	}
			
	vector<int> abundant;
	vector<int> factors;

	for (i = 1; i < 28124; i++)
	{
		factors.clear();
		factors.push_back(1);
		sum = 0;
		for (j = 12; j < ceil(sqrt(i)); j++)
		{
			if (i % j == 0)
			{
				factors.push_back(i / j);
				factors.push_back(j);
			}

		}
		for (j = 0; j < factors.size(); j++)
		{
			sum += factors[j];
		}
		if (sum > i)
		{
			abundant.push_back(i);
		}
	}

	cout << "1\n";

	for (i = 0; i < abundant.size(); i++)
	{
		for (j = 0; j < abundant.size(); j++)
		{
			if ((abundant[i] + abundant[j]) < 28124)
			{
				abunCombo[abundant[i] + abundant[j]] = false;
			}
		}
	}

	sum = 0;

	for (int i = 1; i < 28124; i++)
	{
		if (abunCombo[i])
		{
			sum += i;
		}
	}
	cout << "\n\n" << sum;
}