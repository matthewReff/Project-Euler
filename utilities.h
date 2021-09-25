#ifndef _UTILITIES_H__
#define _UTILITIES_H__

#include <math.h>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

void sieve(int n, bool prime[]);
int factor(int number, vector<int> &factors);

#endif
