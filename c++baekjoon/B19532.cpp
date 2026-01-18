#include <iostream>

using namespace std;

int main()
{
	long long a, b, c, d, e, f;

	cin >> a >> b >> c >> d >> e >> f;
	// ax + by = c, dx + ey = f

	long long x = 0, y = 0;

	y = (a * f - c * d) / (a * e - b * d);
	

	x = (c * e - b * f) / (a * e - b * d);

	cout << x << " " << y;

	return 0;
}