#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main()
{
	int x = 0;
	stack<int> s;

	while (1)
	{
		while (!s.empty()) s.pop();

		int sum = 0;
		vector<int> v;

		cin >> x;
		
		if (x == -1)
		{
			break;
		}

		for (int i = 1; i <= (x / 2); i++)
		{
			if ((x % i) == 0)
			{
				s.push(i);
				sum += i;
			}
		}

		if (sum != x)
		{
			cout << x << " is NOT perfect.\n";
			continue;
		}

		cout << x << " = ";

		while (!s.empty())
		{
			v.push_back(s.top());
			s.pop();
		}

		for (int i = v.size() - 1; i >= 0; i--)
		{
			cout << v[i];
			if (i != 0) cout << " + ";
		}
		cout << "\n";

	}

	return 0;
}