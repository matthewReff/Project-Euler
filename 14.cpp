#include <vector>
#include <iostream>
using namespace std;

int main()
{
	int longest = 0;
	int num;
	for (int i = 1000000; i >= 400000; i--)
	{
		int j = i;
		int steps = 0;
		while (j > 1)
		{
			if (j % 2 == 0)
			{
				j = (j / 2);
				steps++;
			}
			else
			{
				j = (3 * j) + 1;
				steps++;
			}
		}

		if (steps > longest)
		{
			longest = steps;
			num = i;
		}
		cout << longest << "\n";
		cout << i << "\n";

	}
	cout << num;
	return 0;
}