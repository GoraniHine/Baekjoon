#include <iostream>
#include <string>

using namespace std;

int main()
{
	//char E[27] = { "abcdefghijklmnopqrstuvwxyz" };
	char D[27] = { "wghuvijxpqrstacdebfklmnoyz" };
	int T;

	cin >> T;
	cin.ignore(); // 버퍼에 남아있는 널문자 제거

	for (int i = 0; i < T; i++)
	{
		int sumnum[26] = { 0 };
		string input;
		getline(cin, input); // 공백 포함 전체 입력

		int len = input.length();

		for (int j = 0; j < len; j++)
		{
			for (int k = 0; k < 26; k++)
			{
				if (input[j] == D[k])
				{
					sumnum[k]++;
				}
			}
		}

		int max = 0, qm = 0, index = 0;

		for (int k = 0; k < 26; k++)
		{
			if (sumnum[k] > max)
			{
				max = sumnum[k];
				index = k;
				qm = 0;
			}
			else if (sumnum[k] == max)
			{
				qm = 1;
			}
		}

		if (qm == 1)
		{
			cout << "?\n";
		}
		else
		{
			cout << D[index] << "\n";
		}
	}

	return 0;
}