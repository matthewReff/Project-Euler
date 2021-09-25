#include <vector>
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int number;
	long long sum = 0;
	long long squareSum;
	long long sumSqaure;
	long long temp;
	cin >> number;
	for (int i = 1; i < number+1; i++)
	{
		sum += pow(i, 2);
	}
	sumSqaure = sum;
	sum = 0;
	sum = ((number*(number + 1)) / 2);
	squareSum = pow(sum, 2);
	cout << squareSum - sumSqaure;
	return 0;
}