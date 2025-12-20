#include <iostream>
#include <stack> // 스택 문제
#include <algorithm>
#include <vector>

using namespace std;


int main() {
    int n, m = 0, num = 0;
    cin >> n;
    m = n;

    while (m > 0)
    {
        m /= 10;
        num++;
    }

    vector<int> A(num);
    // vector<int> ans(n, -1); // 기본값 -1
    // stack<int> s; // 인덱스 저장용 스택


    for (int i = 0; i < num; i++) {
        // cin >> A[i];
        A[i] = n % 10;
        n /= 10;
    }

    sort(A.begin(), A.end(), greater<int>());

    for (int i = 0; i < num; i++) {
        cout << A[i];
    }

    return 0;
}