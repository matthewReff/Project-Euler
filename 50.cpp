#include <iostream>
#include <map>
#include <vector>
#include <queue>
#include <functional>
#include <algorithm>
#include "utilities.h"
typedef long long ll;
using namespace std;

int main()
{
	int uniques = 0;
	int temp;
	int sizes[10] = {2, 2, 3, 2, 2, 3, 2};
	map <int, vector<int> > decompose;
	priority_queue<int, vector<int>, greater<int> > minHeap;
	minHeap.emplace(200);
	decompose[200] = { 100,100 };
	decompose[100] = { 50, 50 };
	decompose[50] = { 20, 20, 10 };
	decompose[20] = { 10, 10 };
	decompose[10] = { 5, 5 };
	decompose[5] = { 2, 2};
	decompose[2] = { };

	temp = minHeap.top();
	minHeap.pop();
	for (auto i : decompose[temp])
	{
		minHeap.emplace(i);
	}
	while (!minHeap.empty())
	{
		temp = minHeap.top();
		minHeap.pop();
		for (auto i : decompose[temp])
		{
			minHeap.emplace(i);
		}
		uniques += sizes[temp];
		
	}
	cout << uniques << "\n";
	return 0;
}