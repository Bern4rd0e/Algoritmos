#include <iostream>
#include <vector>
using namespace std;

bool existeSoma(const vector<int>& A, int s) {
    int n = A.size();
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (A[i] + A[j] == s) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    int n, s;
    cin >> n;

    vector<int> A(n);
    for (int i = 0; i < n; ++i) {
        cin >> A[i];
    }

    cin >> s;

    if (existeSoma(A, s)) {
        cout << "SIM\n";
    } else {
        cout << "NAO\n";
    }

    return 0;
}
