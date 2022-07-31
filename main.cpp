#include <iostream>

using namespace std;

int TowerOfHanoi(int floors)
{
	// 1 -> 1
	// 2 -> 3
	// 3- > 7
	if (floors == 1)
	{
		return 1;
	}
	if (floors == 2)
	{
		return 3;
	}
	else
	{
		return TowerOfHanoi(floors - 1) * 2 + 1;
	}
}

int main()
{
	cout << TowerOfHanoi(5) << endl;
	return 0;
}