#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


bool isPalindrome(long long number, int numberLength) {
	for(int i = 0; i < numberLength/2; i++) {
		long long  lowNum = number / (long long)pow(10, i)% 10;
		long long  highNum = number / (long long)pow(10, numberLength - i - 1) % 10;
		if(lowNum != highNum) {
			return false;
		}
	}
	return true;
}

int getLength(long long number) {
	if(number < 0) {
		return 0;
	}

	if(number < 10) {
		return 1;
	}

	return ceil(log10(number));
}

vector<bool> generatePalindromes() {
	vector<bool> palindromes(1000000, false);

	for(int j = 999; j >= 100; j--) {
		for(int k = 999; k >= 100; k--) {
			if(j % 11 == 0 || k % 11 == 0) {
				long long checkNumber = j*k;
				int length = getLength(checkNumber);
				if (length == 6 && isPalindrome(checkNumber, length)) {
					palindromes[checkNumber] = true;
				}
			}
		}
	}
	return palindromes;
}


/*
Code for euler answer:
1
999999
*/
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

	vector<bool> palindromes = generatePalindromes();

    int cases;
    cin >> cases;

    long long n;
    for(int i = 0; i < cases; i++) {
    	cin >> n;
    	n--; //Less than n, not equal to

    	while(!palindromes[n]) {
    		n--;
    	}
    	cout << n << "\n";
    	
    }  
    return 0;
}
