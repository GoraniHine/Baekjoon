#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;


int main() {
    int n = 0, x = 0;
    cin >> n;

    vector<int> A(n);
    vector<int> B(n);


    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    for (int i = 0; i < n; i++) {
        B[i] = A[i];
    }

    sort(B.begin(), B.end());
    B.erase(unique(B.begin(), B.end()), B.end()); // 중복 제거 정렬

    x = B.size(); // vector 클래스의 멤버 함수

    for (int i = 0; i < n; i++) {
        int idx = lower_bound(B.begin(), B.end(), A[i]) - B.begin(); // lower_bound "lower_bound(시작, 끝, 값) '값' 이상이 처음 등장하는 위치를 찾아 줌, 반환값: iterator
        // iterator 끼리 빼면 정수가 된다.
        cout << idx << " "; 
    }

    return 0;
}