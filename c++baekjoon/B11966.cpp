#include <iostream>

using namespace std;

int main()
{
	int X = 0, count = 0;
	cin >> X;

	for (int i = 0; i < 31; i++)
	{
		if (X & 1 << i)
		{
			count++;
		}
	}

	if (count == 1)
	{
		cout << "1";
	}
	else
	{
		cout << "0";
	}

	return 0;
}