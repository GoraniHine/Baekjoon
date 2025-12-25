#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int X, Y, count = 0, ncount = 0, check = 0;
	cin >> X;

	Y = ~X + 1;

	for (int i = 31; i > -1; i--)
	{
		check = 0;

		if (X & (1 << i))
		{
			//count++;
			X = X - (1 << i);
			check++;
		}

		if (Y & (1 << i))
		{
			//ncount++;
			Y = Y - (1 << i);
			check++;
		}

		if (check == 1)
		{
			count++; // XOR
		}
	}

	cout << count;

	return 0;
}