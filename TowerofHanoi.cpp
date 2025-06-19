#include <bits/stdc++.h>
using namespace std;

void THN(int n, char A, char B, char C){
    if (n>1) THN(n-1, A, C, B);
    cout << "\nChuyển đĩa " << n << " từ " << A << " sang " << B;
    if (n>1) THN(n-1, C, B, A);
}

int main(){
    THN(3, 'A', 'B', 'C');
}

/*
Đặt T(n) là độ phức tạp
Ta có:  T(n) = C0 nếu n = 1
        T(n) = 2T(n-1) + C nếu n>1
Nên T(n) = 2T(n-1) + C
         = 2[2T(n-2) + C] + C
         = 2^2T(n-2) + 2C + C
         = 2^3T(n-3) + 2^2C + 2^1C + 2^0C
         ...
         = 2^nT(n-n) + [2^(n-1) + 2^(n-2) +...+ 2^1 + 2^0]C
         = 2^nC0 + (2^n - 1)C
         = theta(2^n)
*/