#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>

using namespace std;

// 문서 하나를 나타내는 구조체 (클래스 내부에 두어도 됨)
struct Document {
    int id;         // 초기 위치
    int priority;   // 중요도
};

class Printer {
private:
    int n, m; // n: 문서 개수, m: 궁금한 문서의 위치

public:
    // 문제 해결 핵심 로직
    void solve() {
        cin >> n >> m;

        queue<Document> q;
        priority_queue<int> pq; // 중요도 순서대로 정렬해줄 우선순위 큐

        for (int i = 0; i < n; i++) {
            int p;
            cin >> p;
            q.push({ i, p }); // {id, priority} 형태로 큐에 삽입
            pq.push(p);     // 중요도만 우선순위 큐에 삽입
        }

        int printCount = 0;

        while (!q.empty()) {
            Document current = q.front();
            q.pop();

            // 현재 문서의 중요도가 가장 높은지 확인
            if (current.priority == pq.top()) {
                printCount++;
                pq.pop(); // 출력했으니 우선순위 큐에서도 제거

                // 내가 찾던 그 문서라면?
                if (current.id == m) {
                    cout << printCount << "\n";
                    return;
                }
            }
            else {
                // 더 중요한게 있다면 다시 뒤로 보냄
                q.push(current);
            }
        }
    }
};

int main() {
    int testCase;
    cin >> testCase;

    Printer myPrinter; // 프린터 객체 생성
    while (testCase--) {
        myPrinter.solve();
    }

    return 0;
}