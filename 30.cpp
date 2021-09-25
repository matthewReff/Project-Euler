#include "utilities.h"

using namespace std;

int main()
{
	vector<int> num1;
	vector<int> num2;
	vector<int> amicable;
	int sum1 = 0;
	int sum2 = 0;
	int bigSum = 0;
	int perfectCheck;

	for (int i = 1; i <= 10000; i++)
	{
		//cout << i << " ";
		sum1 = 0;
		sum2 = 0;
		num1.clear();
		num2.clear();
		factor(i, num1);
		for (int j = 0; j < num1.size(); j++)
		{
			sum1 += num1[j];
		}
		perfectCheck = sum1;
		factor(sum1, num2);
		for (int j = 0; j < num2.size(); j++)
		{
			sum2 += num2[j];
		}
		if (sum2 == i && sum1 != i)
		{
			amicable.push_back(i);
			cout << i << " ";
		}
	}
	for (int i = 0; i < amicable.size(); i++)
	{
		bigSum += amicable[i];
	}
	cout << "\n" << bigSum;
	
	return 0;
}