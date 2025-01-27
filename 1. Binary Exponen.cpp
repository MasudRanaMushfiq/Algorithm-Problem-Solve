#include <bits/stdc++.h>
using namespace std;

long long binaryExponentiation(long long base, long long power) {
    long long result = 1;

    while(power > 0){
        if(power % 2 == 1){
            result = result * base;
        }
        base = base * base;
        power = power / 2;
    }

    return result;
}

int main(){
    long long base, power;
    cin >> base >> power;
    cout << base << "^" << power << " = " << binaryExponentiation(base, power) << endl;

    return 0;
}
