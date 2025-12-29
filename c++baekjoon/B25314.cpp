#include <iostream>

using namespace std;

int main()
{
	int N = 0;
	cin >> N;

	while (N > 0)
	{
		cout << "long ";
		N = N - 4;
	}

	cout << "int";
}