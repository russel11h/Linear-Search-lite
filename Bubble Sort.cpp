#include <bits/stdc++.h>
using namespace std;

int main() {
    int A[] = {5, 3, 8, 4, 2};
    int N = 5;

    for (int i = 0; i < N - 1; i++) {
        bool flag = false;
        for (int j = 0; j < N - 1 - i; j++) {
            if (A[j] > A[j + 1]) {
                swap(A[j], A[j + 1]);
                flag = true;
            }
        }
        if (!flag)
            break;
    }


    for (int i = 0; i < N; i++) {
        cout << A[i] << " ";
    }
    cout << endl;

    return 0;
}
