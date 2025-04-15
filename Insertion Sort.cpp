#include <iostream>
using namespace std;

int main() {
    int A[] = {5, 3, 8, 4, 2};
    int N = 5;

    for (int i = 0; i < N; i++) {
        int v = A[i];
        int j;

        for ( j = i - 1; j >= 0; j--) {
            if (v > A[j]) {   // < dile acending order a sajbe
                A[j + 1] = A[j];
            } else {
                break;
            }
        }
        A[j + 1] = v;
    }

    for (int i = 0; i < N; i++) {
        cout << A[i] << " ";
    }
    cout << endl;

    return 0;
}
