#include <iostream>

using namespace std;

int main()
{
	int N = 0, M = 0;
	int a, b, c;
	cin >> N >> M;

	int Light[4000] = { 0 };

	for (int i = 0; i < N; i++)
	{
		int Lstate = 0;
		cin >> Lstate;
		Light[i] = Lstate;
	}

	for (int i = 0; i < M; i++)
	{
		cin >> a >> b >> c;
		if (a == 1)
		{
			Light[b - 1] = c;
		}
		else if (a == 2)
		{
			for (; b < c + 1; b++)
			{
				Light[b - 1] = 1 - Light[b - 1];
			}
		}
		else if (a == 3)
		{
			for (; b < c + 1; b++)
			{
				Light[b - 1] = 0;
			}
		}
		else if (a == 4)
		{
			for (; b < c + 1; b++)
			{
				Light[b - 1] = 1;
			}
		}
	}

	for (int i = 0; i < N; i++)
	{
		cout << Light[i] << " ";
	}

	return 0;
}