// ½ÇÆÐ
#include <iostream>

using namespace std;

int main(void)
{
	int X = 0, stamp = 0;
	cin >> X;

	while (X != 1)
	{
		if ((X - 1) % 3 == 0)
		{
			X--;
			stamp++;
			cout << X;

			if (X % 3 == 0)
			{
				X /= 3;
				stamp++;
				cout << X;
				continue;
			}

			continue;
		}
		else if (X % 3 == 0)
		{
			X /= 3;
			stamp++;
			cout << X;
			continue;
		}
		else if ((X - 1) % 2 == 0)
		{
			X--;
			stamp++;
			cout << X;
			if (X % 2 == 0)
			{
				X /= 2;
				stamp++;
				cout << X;
				continue;
			}
			continue;
		}
		else if (X % 2 == 0)
		{
			X /= 2;
			stamp++;
			cout << X;
			continue;
		}
		else
		{
			X--;
			cout << X;
			stamp++;
		}
		
	}

	cout << stamp;

	return 0;
}