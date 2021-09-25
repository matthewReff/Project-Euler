#include "utilities.h"

//prime seive stolen from SDSMT programming team
void sieve(int n, bool prime[]) {
	prime[0] = false;
	prime[1] = false;
	int m = sqrt(n);
	for (int i = 2; i <= m; i++)
		if (prime[i])
			for (int k = i * 2; k <= n; k += i)
				prime[k] = false;
}

//Produces proper divisors efficently?
int factor(int number, vector<int> &factors)
{
	int i;
	factors.clear();
	for (i = 1; i <= ceil(sqrt(number)); i++)
	{
		if (number % i == 0)
		{
			factors.push_back(number / i);
			if (number / i != i) 
			{
				factors.push_back(i);
			}
		}
	}
	return factors.size();
}

