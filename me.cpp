#include <bits/stdc++.h>
using namespace std;

typedef vector<vector<long long>> Matrix;

Matrix multiply(Matrix a, Matrix b){
    int n = a.size();
    Matrix temp(n, vector<long long>(n, 0));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < n; k++) {
                temp[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    return temp;
}

Matrix matExp(Matrix base, int pow){
     int n = base.size();
    Matrix num(n, vector<long long>(n, 0));

    for(int i=0; i<n; i++){
        num[i][i] = 1;
    }
    while(pow>0){
        if(pow&1){
            num = multiply(base,num);
        }
        base = multiply(base,base);
        pow = pow >>1;
    }
    return num;

}



int main(){
    int n, pow; 
    cin>>n>>pow;
    Matrix base(n, vector<long long>(n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> base[i][j];
        }
    }
    Matrix result = matExp(base, pow);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
}

