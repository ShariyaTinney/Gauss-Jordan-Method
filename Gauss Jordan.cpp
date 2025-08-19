#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;
    float A[20][20], x[20];

    // Input matrix size
    cout << "Enter the size of matrix: ";
    cin >> n;

    // Input augmented matrix elements
    cout << "\nEnter the elements of the augmented matrix row-wise:\n";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j <= n; ++j) {
            cout << "A[" << i + 1 << "][" << j + 1 << "]: ";
            cin >> A[i][j];
        }
    }

    // Gauss Elimination to make the matrix upper triangular
    for (int j = 0; j < n; ++j) {
        for (int i = 0; i < n; ++i) {
            if (i != j) {
                float ratio = A[i][j] / A[j][j];
                for (int k = 0; k <= n; ++k) {
                    A[i][k] -= ratio * A[j][k];
                }
            }
        }
    }

    // Back substitution
    cout << "\nThe solution is:\n";
    for (int i = 0; i < n; ++i) {
        x[i] = A[i][n] / A[i][i];
        cout << fixed << setprecision(6);
        cout << "x" << i + 1 << " = " << x[i] << endl;
    }

    return 0;
}

