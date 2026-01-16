#include <iostream>

using namespace std;

int main()
{
	int Pieces[6] = { 1, 1, 2, 2, 2, 8 };
	int MyPieces[6] = { 0 };

	for (int i = 0; i < 6; i++)
	{
		cin >> MyPieces[i];
	}

	for (int i = 0; i < 6; i++)
	{
		if (MyPieces[i] == Pieces[i])
		{
			cout << '0';
		}
		else
		{
			cout << Pieces[i] - MyPieces[i];
		}
		cout << " ";
	}

	return 0;
}