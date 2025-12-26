#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int X, count = 0, first = 0;
	cin >> X;

	for (int i = 19; i > -1; i--)
	{
		if (X & (1 << i))
		{
			count++;
			X = X - (1 << i);
		}
	}
	
	cout << count;

	return 0;
}