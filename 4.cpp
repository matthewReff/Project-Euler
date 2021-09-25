#include <iostream>
#include <vector>

using namespace std;

int main() {
vector<int> primes;
int sumTotal;
long long check = 600851475143;
long long highSoFar = 0;
bool prime;
primes.push_back(2);
	for (int i = 3; i < 800001;i++) {
		prime = true;
		for (int j = 2; j < i; j++) {
			if (i % j == 0) {
				prime = false;
			}
		}
		if (prime)
		{
			primes.push_back(i);
			if (primes.size() == 10001)
			{
				cout << primes[10000];
			}
		}
	}
}