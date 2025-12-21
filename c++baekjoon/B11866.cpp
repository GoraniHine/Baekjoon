#include <iostream>
#include <queue>
#include <algorithm>
#include <vector>

using namespace std;


int main() {
    int n = 0, m = 0;
    cin >> n >> m;

    int x = 0;

    queue<int> q;

    for (int i = 0; i < n; i++) {
        q.push(i + 1);
    }

    cout << "<";

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m - 1; j++)
        {
            q.push(q.front());
            q.pop();
        }

        cout << q.front();
        q.pop();

        if (i == n - 1)
        {
            cout << ">";
        }
        else
        {
            cout << ", ";
        }

    }

    return 0;
}