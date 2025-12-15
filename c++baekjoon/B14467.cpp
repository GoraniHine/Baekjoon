#include <iostream>

using namespace std;

int main()
{
	int cow[10] = { 2, 2, 2, 2, 2, 2, 2, 2, 2, 2 };
	int N = 0, min = 0;
	cin >> N;
	
	for (int i = 0; i < N; i++)
	{
		int a, b;
		cin >> a >> b;

		if (cow[a - 1] == 0 && b == 1)
		{
			min++;
		}
		else if (cow[a - 1] == 1 && b == 0)
		{
			min++;
		}

		cow[a - 1] = b;
	}

	cout << min;

	return 0;
}