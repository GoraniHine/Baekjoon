#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n = 0, m = 0, num = 0;
    cin >> n >> m;

    vector<string> A(n);
    vector<string> B(m);
    vector<string> C(0);

    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    for (int i = 0; i < m; i++) {
        cin >> B[i];
    }

    sort(B.begin(), B.end());

    for (int i = 0; i < n; i++) {
        if (binary_search(B.begin(), B.end(), A[i])) { // B가 정렬되어 있어야 사용이 가능함.
            //find는 큰 데이터에서는 느리다. 시간복잡도 O(n);
            C.push_back(A[i]);
        }
    }

    sort(C.begin(), C.end());

    cout << C.size() << "\n";

    for (string s : C) {
        cout << s << "\n";
    }

    return 0;
}