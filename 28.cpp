#include <iostream>
#include <algoritm>
using namespace std;



int main()
{
	long long sum = 1;
	long long topRight = 0;
	int i = 1;
	while(i < 501)
	{
		topRight = pow(2 * i + 1, 2);
		sum += ((4 * topRight) - (12 * i));
		cout << sum << "\n";
		i += 1;
	}
	cout << sum;
	return 0;
}