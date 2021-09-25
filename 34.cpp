#include <iostream>
#include <cmath>
#include "utilities.h"

using namespace std;

int main()
{
	int squares[11];
	for (int i = 0; i < 11; i++)
	{
		squares[i] = pow(i, 2);
		cout << squares[i] << " ";
	}

	return 0;
}
