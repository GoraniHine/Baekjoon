#include <iostream>

using namespace std;

int main()
{
	int Jun = 0, sung = 0;
	int juncash = 0, sungcash = 0, junshare = 0, sungshare = 0;
	int price[14] = { 0 };
	int lower = 0, upper = 0;

	cin >> juncash;
	sungcash = juncash;

	for (int i = 0; i < 14; i++)
	{
		cin >> price[i];
	}

	for (int i = 0; i < 14; i++)
	{
		if (juncash >= price[i])
		{
			junshare += juncash / price[i];
			juncash %= price[i];
		}

		if (i > 0 && price[i - 1] > price[i])
		{
			lower++;
			upper = 0;
		}
		else if (i > 0 && price[i - 1] < price[i])
		{
			lower = 0;
			upper++;
		}

		if (lower > 2 && sungcash >= price[i])
		{
			sungshare += sungcash / price[i];
			sungcash %= price[i];
		}

		if (upper > 2 && sungshare > 0)
		{
			sungcash = sungcash + sungshare * price[i];
			sungshare = 0;
		}

		//cout << lower << " " << upper << " " << junshare << " " << sungshare << "\n";
	}

	juncash = junshare * price[13] + juncash;
	sungcash = sungshare * price[13] + sungcash;

	//cout << juncash << " " << sungcash;

	if (juncash == sungcash)
	{
		cout << "SAMESAME\n";
	}
	else if (juncash > sungcash)
	{
		cout << "BNP\n";
	}
	else if (juncash < sungcash)
	{
		cout << "TIMING\n";
	}

	return 0;
}