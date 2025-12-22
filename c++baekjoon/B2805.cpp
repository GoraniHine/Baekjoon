#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;


int main() {
    int n, m, sum = 0, left = 0, right = 0, mid;
    cin >> n >> m;
    vector<int> A(n);

    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    sort(A.begin(), A.end());

    left = 0; // A[0]보다 더 자를 수 있기 때문
    right = A[n - 1];

    while (left <= right) {   // 이분 탐색
        mid = (left + right) / 2;

        sum = 0;
        for (int i = 0; i < n; i++) {
            if (A[i] > mid)
                sum += A[i] - mid;
        }

        if (sum >= m)
            left = mid + 1;   // 더 높게 잘라도 됨
        else
            right = mid - 1;  // 너무 높음
    }

    cout << right; // right는 조건(sum >=)을 만족하는 최대 높이

    return 0;
}