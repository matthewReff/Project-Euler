//HackerRank - https://www.hackerrank.com/contests/projecteuler/challenges/euler001/problem
//Euler - https://projecteuler.net/problem=1

/*
    Input for Project Euler:
    1
    1000
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int cases;
    cin >> cases;
    for(int i = 0; i < cases; i++) {
        int num;
        cin >> num;
        num--;
        
        long long numThrees = num / 3;
        long long  numFives = num / 5;
        long long  numFifteens = num / 15;
        
        // Do a series of Gauss sums and multiply by that number.
        // Ex: Do a counting sum of 1,2,3 -> 3(4) / 2 then multiply by 3 to get the sum of 3 + 6 + 9
        // Take out fifteens since we doublecount them
        long long total = 0;
        total += (((numThrees * numThrees) + numThrees) / 2) * 3;
        total += (((numFives * numFives) + numFives) / 2) * 5;
        total -= (((numFifteens * numFifteens) + numFifteens) / 2) * 15;
        cout << total << "\n";
    }
    
    return 0;
}