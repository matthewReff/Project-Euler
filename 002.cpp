// https://www.hackerrank.com/contests/projecteuler/challenges/euler002/problem
// https://projecteuler.net/problem=2

/*
    Input for Project Euler:
    1
    4000000
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    long long cases;
    cin >> cases;
    
    for(int i = 0; i < cases; i++) {
        long long n;
        cin >> n;
        
        long long total = 0;
        long long prevNum1 = 1;
        long long prevNum2 = 1;    
        long long newSum;
        do {
            newSum = prevNum1 + prevNum2;
            prevNum2 = prevNum1;
            prevNum1 = newSum;
            
            if(prevNum2 % 2 == 0) {
                total += prevNum2;
            }
        } while(prevNum1 < n) ;
        cout << total << "\n";
    }
    return 0;
}