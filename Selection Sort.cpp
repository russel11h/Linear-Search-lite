#include <iostream>
using namespace std;

int main() {
    int A[] = {5, 3, 8, 4, 2};
    int N =5;

    for (int i = 0; i < N - 1; i++) {
        int k = i;
        for (int j = i + 1; j < N; j++) {
            if (A[k] > A[j]) {
                k = j;
            }
        }
       swap(A[k],A[i]);

    }

    for (int i = 0; i < N; i++) {
        cout << A[i] << " ";
    }
    cout << endl;

    return 0;
}
