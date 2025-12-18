#include <iostream>
#include <stack> // 스택 문제
#include <vector>

using namespace std;


int main() {
    int n;
    cin >> n;

    vector<int> B(n, 0);
    
    int max = n;

    if ((n % 2) == 0)
    {
        int max = n;

        int plus = n / 2;
        int minus = n / 2 - 1;

        for (int i = (n / 2); i < n; i++)
        {
            B[plus] = max--;
            B[minus] = max--;
            plus++;
            minus--;
        }
    }
    else
    {
        int mid = n / 2;

        B[mid] = max--;
        
        int plus = mid + 1;
        int minus = mid - 1;

        while(max > 0)
        {
            if (plus < n)
            {
                B[plus++] = max--;
            }
            if (minus >= 0)
            {
                B[minus--] = max--;
            }
        }
    }
    
    for (int i = 0; i < n; i++)
    {
        cout << B[i] << " ";
    }


    return 0;
}

/* 안전한 코드
if ((n % 2) == 0)
{
    int left = n / 2 - 1;
    int right = n / 2;

    B[left] = max--;
    B[right] = max--;

    int plus = right + 1;
    int minus = left - 1;

    while (max > 0)
    {
        if (plus < n)
        {
            B[plus++] = max--;
        }
        if (minus >= 0)
        {
            B[minus--] = max--;
        }

    }
}
*/