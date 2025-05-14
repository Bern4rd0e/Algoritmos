#include <iostream>
#include <vector>
using namespace std;

bool estaOrdenado(const vector<int>& A) {
    int n = A.size();
    for (int i = 0; i < n - 1; ++i) {
        if (A[i] > A[i + 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cin >> n;

    vector<int> A(n);
    for (int i = 0; i < n; ++i) {
        cin >> A[i];
    }

    if (estaOrdenado(A)) {
        cout << "SIM\n";
    } else {
        cout << "NAO\n";
    }

    return 0;
}
