#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	long long x = 0, check = 0;
	cin >> x;

	priority_queue<long long, vector<long long>, greater<long long>> pq;

	for (int i = 0; i < x; i++)
	{
		cin >> check;

		if (check == 0)
		{
			if (pq.empty())
			{
				cout << "0\n";
			}
			else
			{
				cout << pq.top() << "\n";
				pq.pop();
			}
		}
		else if (check != 0)
		{
			pq.push(check);
		}
	}

	return 0;
}