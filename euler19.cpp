#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int calcFactorsTo = 28123;
	int i, j, k;
	i = 2;
	int total;
	vector<int> factors;
	vector<int> abun;
	vector<int>  noSum;
	bool possible;
	bool searching;

	while (i < calcFactorsTo)
	{
		total = 0;
		factors.clear();
		for (j = 1; j < i; j++)
		{
			if (i%j == 0)
			{
				factors.push_back(j);
			}
		}

		//cout << i << ": ";
		for (j = 0; j < factors.size(); j++)
		{
			total += factors[j];
			if (total > i)
			{
				abun.push_back(i);
			}
			//cout << factors[j] << " ";
		}
		//cout << "\n";


		i++;
	}

	
	for (int i = 0; i < abun.size(); i++)
	{
		cout << abun[i] << " ";
	}
	
	for (int i = 25; i < calcFactorsTo; i+2)
	{
		possible = false;
		searching = true;
		j = 0;
		k = 0;
		while (searching == true && j < abun.size())
		{
			while(searching == true && k < abun.size())
			{
				
				if ((abun[j] + abun[k]) == i)
				{
					possible = true;
					searching = false;
				}
			}
		}
		cout << "potato";
		if (!possible)
		{
			noSum.push_back(i);
		}
	}
	for (int i = 0; i < noSum.size(); i++)
	{
		cout << noSum[i] << " ";
	}
	
	return 0;
}