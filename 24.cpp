#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int myInts[10] = {0,1,2,3,4,5,6,7,8,9};
	int permNum = 0;
	do
	{
		permNum++;
		if (permNum == 1000000)
		{
			for (int i = 0; i < 10; i++)
			{
				cout << myInts[i] << " ";
			}
			cout << "\n";
		}
		
		//for (int i = 0; i < 10; i++)
		//{
		//	cout << myInts[i] << " ";
		//}
		//cout << "\n";
	} while (next_permutation(myInts, myInts + 10) );
	return 0;
}
	/*
	bool used[10];
	int sol[10];
	for (int i = 0; i < 10; i++)
	{
		used[i] = false;
	}

	int num;
	return 0;
}

int recursivePermute(bool used[], int sol[], int pos, int iterationNum)
{
	if (iterationNum == 1000000)
	{
		return 1;
	}
	for (int i = 0; i < 10; i++)
	{
		if (!used[i])
		{
			used[i] = true;
			sol[i] = i;
			recursivePermute(used, sol, pos+1, iterationNum + 1);
			used[i] = false;
		}
	}
}
*/