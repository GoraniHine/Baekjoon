#include <iostream>
#include <algorithm> 
#include <vector>
#include <cmath>

using namespace std;


int main() {
    int n;
    cin >> n;

    int sum = 0, many_num = 0, second_num = 0, second_flag = 0;

    vector<int> A(n);
    vector<int> many(8001, 0);
    vector<int> modes; // 최빈값
    int maxCount = 0;

    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    for (int i = 0; i < n; i++)
    {
        sum += A[i];
    }

    cout << (int)round((double)sum / n) << "\n"; // round == 실수 값을 가장 가까운 정수로 반올림

    sort(A.begin(), A.end()); // 오름차순

    cout << A[(n / 2)] << "\n";

    for (int i = 0; i < n; i++) { // -4000 ~ 4000 까지 존재
        many[A[i] + 4000]++;
    }

    for (int i = 0; i <= 8000; i++) {
        if (many[i] > maxCount) {
            maxCount = many[i];
            modes.clear();          // 기존 최빈값 제거
            modes.push_back(i - 4000); // 새로운 최빈값 추가
        }
        else if (many[i] == maxCount) {
            modes.push_back(i - 4000); // 같은 최빈값 추가
        }
    }

    // 두 번째로 작은 최빈값 출력
    if (modes.size() > 1) {
        cout << modes[1] << "\n";
    }
    else {
        cout << modes[0] << "\n";
    }
    
    cout << (A[n - 1] - A[0]) << "\n";

    return 0;
}