#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;


int main() {
    int n = 0;
    int sum = 0, mtime = 0;
    cin >> n;
    

    vector<int> A(n);


    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    sort(A.begin(), A.end());
    
    for (int i = 0; i < n; i++)
    {
        sum += A[i];
        mtime += sum;
    }

    cout << mtime;

    return 0;
}