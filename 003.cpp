
/*
Input for euler solution:
1
600851475143 
*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


// Yoink: https://www.geeksforgeeks.org/print-all-prime-factors-of-a-given-number/
vector<long long> primeFactorize(long long numToFactor) {
	vector<long long> factors;
	long long arrSize = numToFactor;
	while(numToFactor % 2 == 0) {
		numToFactor /= 2;
		factors.push_back(2);
	}

	for(long long i = 3; i <= sqrt(arrSize); i+=2) {
		while(numToFactor % i == 0) {
			numToFactor /= i;

			factors.push_back(i);
		}
	}

	if(numToFactor != 1) {
		factors.push_back(numToFactor);
	}

	return factors;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int cases;
    cin >> cases;
    for(int i = 0; i < cases; i++) {
        long long n;
        cin >> n;

        cout << primeFactorize(n).back() << "\n";

    }
    
    return 0;
}