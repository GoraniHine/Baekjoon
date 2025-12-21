#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int M = 0, x = 0;
	cin >> M;
	string X = "";
	int S[20] = { 0 };
	
	for (int i = 0; i < M; i++)
	{
		cin >> X;
		
		if (X != "all" && X != "empty")
		{
			cin >> x;
		}

		if (X == "add")
		{
			S[x - 1] = 1;
		}
		else if (X == "remove")
		{
			S[x - 1] = 0;
		}
		else if (X == "check")
		{
			if (S[x - 1] == 1)
			{
				cout << "1" << "\n";
			}
			else
			{
				cout << "0" << "\n";
			}
		}
		else if (X == "toggle")
		{
			if (S[x - 1] == 1)
			{
				S[x - 1] = 0;
			}
			else if (S[x - 1] == 0)
			{
				S[x - 1] = 1;
			}
		}
		else if (X == "all")
		{
			for (int j = 0; j < 20; j++)
			{
				S[j] = 1;
			}
		}
		else if (X == "empty")
		{
			for (int j = 0; j < 20; j++)
			{
				S[j] = 0;
			}
		}
	}

	return 0;
}