#include <iostream>

using namespace std;

long long GCD(long long a, long long b)
{
	while (b != 0)
	{
		long long r = a % b;
		a = b;
		b = r;
	}
	return a;
}

int main(void)
{
	long long PA = 0, CA = 0;
	long long PB = 0, CB = 0;
	long long result1 = 0, result2 = 0;
	int num = 0;

	cin >> CA >> PA;
	cin >> CB >> PB;

	num = GCD(CA, PA);
	CA /= num;
	PA /= num;

	num = GCD(CB, PB);
	CB /= num;
	PB /= num;

	result1 = CA * PB + CB * PA;
	result2 = PB * PA;

	num = GCD(result1, result2);
	result1 /= num;
	result2 /= num;

	cout << result1 << " " << result2 << "\n";

	return 0;
}