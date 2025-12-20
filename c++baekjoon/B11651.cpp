#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;


int main() {
    int n = 0;
    cin >> n;

    //vector<int> A(num);
    vector<vector<int>> A(n, vector<int>(2));

    for (int i = 0; i < n; i++)
    {
        cin >> A[i][1] >> A[i][0];
    }

    sort(A.begin(), A.end());

    for (int i = 0; i < n; i++)
    {
        cout << A[i][1] << " " << A[i][0] << "\n";
    }

    return 0;
}