#include <iostream> // 비트 공부 다시 해야 할 듯
#include <string>
using namespace std;

int main() {
    int N;
    string bitK;
    cin >> N >> bitK;

    int stamp = 0;
    for (char c : bitK) {
        if (c == '1') stamp++;
    }

    cout << stamp << "\n";
    return 0;
}

/* 51점 코드
#include <iostream>

using namespace std;

int main()
{
    string bitK;
    unsigned long long N = 0, K = 0;
    int stamp = 0;

    cin >> N;
    cin >> bitK;

    // 문자열 → 이진수 값
    for (char c : bitK)
    {
        K = (K << 1) | (c - '0');
    }

    while (K != 0) {
        K &= (K - 1);  // 가장 낮은 1비트 제거
        stamp++;
    }

    cout << stamp;

    return 0;
}
*/