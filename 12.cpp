#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
	long long i = 1;
	long long factors;
	long long highest = 0;
	long long highestIndex = 0;
	long long currentNum;
	while (i < 10000)
	{
		factors = 0;
		currentNum = (i * (i + 1)) / 2;
		for (long long j = 1; j < currentNum+1; j++)
		{
			if (currentNum % j == 0)
			{
				factors++;
			}
		}
		//cout << currentNum << "\n";
		cout << factors << "\n";
		//cout << i << "\n";
		if (highest < factors)
		{
			highest = factors;
			highestIndex = currentNum;
		}
		cout << highestIndex << " " << highest << "\n";
		if (factors > 500)
		{
			cout << currentNum;

			return 1;
		}
		i++;
	}
	return 0;
}
