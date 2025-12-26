#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int X, count = 0, size = 1;
	cin >> X;

	while (size < X)
	{
		size <<= 1;
	}

	int eat = X;
	int maxsize = size;

	while (eat > 0) { // X가 7일 때 생각하면 왜 틀린지 알 수 있다.
		if (size <= eat) {
			eat -= size;   // 먹는다
		}
		else {
			size >>= 1;     // 쪼갠다
			count++;
		}
	}

	cout << maxsize << " " << count;

	return 0;
}