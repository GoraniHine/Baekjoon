#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int N = 0;
	int count = 0;
	int x = 0;
	bool isPrime = 0;

	cin >> N;

	vector<int> A(N);

	for (int i = 0; i < N; i++)
	{
		x = 0;
		isPrime = 1;
		cin >> x;

		if (x == 1) continue;

		for (int j = 2; j * j <= x; j++) // x 자리에 j 넣으면 x 본인도 나눠질수 있음
		{
			if ((x % j) == 0)
			{
				isPrime = 0;
				break;
			}
		}

		if (isPrime)
		{
			count++;
		}
	}

	cout << count;

	return 0;
}