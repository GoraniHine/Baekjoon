#include <iostream>
#include <stack> // 스택 문제
#include <vector>

using namespace std;


int main() {
    int n;
    cin >> n;
    vector<int> A(n);
    vector<int> B(1000001, 0);
    vector<int> ans(n, -1); // 기본값 -1
    stack<int> s; // 인덱스 저장용 스택

    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    for (int i = 0; i < n; i++)
    {
        B[A[i]]++;
    }

    for (int i = 0; i < n; i++) {
        while (!s.empty() && B[A[s.top()]] < B[A[i]]) { // 더 큰 수가 안나온 수는 스택에 계속 남아 있는다.
            ans[s.top()] = A[i]; // 끝까지 더 큰 수가 안남은 경우 그대로 -1이 된다.
            s.pop();
        }
        s.push(i);
    }

    for (int i = 0; i < n; i++) {
        cout << ans[i] << " ";
    }

    return 0;
}