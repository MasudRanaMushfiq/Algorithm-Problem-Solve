
#include <iostream>
#include <vector>
using namespace std;

typedef vector<vector<long long>> Matrix;

// Function to multiply two matrices
Matrix multiply(Matrix a, Matrix b) {
    int n = a.size();
    Matrix result(n, vector<long long>(n, 0));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < n; k++) {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    return result;
}

// Function to perform matrix exponentiation
Matrix matrixExponentiation(Matrix base, long long power) {
    int n = base.size();
    Matrix result(n, vector<long long>(n, 0));
    
    // Initialize result as identity matrix
    for (int i = 0; i < n; i++) {
        result[i][i] = 1;
    }

    while(power > 0){
        if (power % 2 == 1){
            result = multiply(result, base);
        }
        base = multiply(base, base);
        power /= 2;
    }
    return result;
}

int main() {
    int n;
    long long power;
    cin >> n;

    Matrix base(n, vector<long long>(n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> base[i][j];
        }
    }

    cin >> power;

    Matrix result = matrixExponentiation(base, power);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
