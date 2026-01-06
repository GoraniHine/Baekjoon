#include <iostream>

using namespace std;

int main()
{
	int N = 0, sum = 1;
	cin >> N;

	for (int i = 0; i < 2; i++)
	{
		if (N == 1)
		{
			sum *= 0;
		}

		sum *= (N - i);
	}

	cout << sum;

	return 0;
}