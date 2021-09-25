#include <cmath>
#include <iostream>
#include <iomanip>
using namespace std;

void sieve(int n, bool prime[]);

int main()
{
	bool * primes;
	primes = new (nothrow) bool[1000];
	sieve(1000, primes);

	cout << setprecision(50);

	for (int i = 0; i < 1000; i++)
	{
		if (primes[i])
		{
			cout << (long double)1.0 / i << " " << i << "\n";
		}
	}

	return 0;
}

void sieve(int n, bool prime[]) {
	prime[0] = false;
	prime[1] = false;
	int m = sqrt(n);
	for (int i = 2; i <= m; i++)
		if (prime[i])
			for (int k = i * 2; k <= n; k += i)
				prime[k] = false;
}