#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int N, M;
	int a, b;
	int sum = 0, x = 0;
	cin >> N >> M;

	vector<int> A(N + 1);
	vector<int> Sum(N + 1, 0);

	for (int i = 1; i <= N; i++)
	{
		cin >> A[i];
		Sum[i] = Sum[i - 1] + A[i];
	}

	for (int i = 0; i < M; i++)
	{
		cin >> a >> b;
		cout << Sum[b] - Sum[a - 1] << "\n";
	}

	return 0;
}