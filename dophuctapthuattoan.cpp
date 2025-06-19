#include <bits/stdc++.h>
using namespace std;

double fun(double x, int n){
    if (n==0) return x;
    double S = 0;
    for (int i=1; i<=n; i+=2){
        S+=(x-i)*i;
    }
    return S + fun(x-1, n/2) * fun(x+1, n/2);
}

/*
Đặt T(n) là độ phức tạp
Ta có:  T(n) = C0 nếu n = 0,1
        T(n) = 2T(n/2) + Cn nếu n>1
Nên T(n) = 2T(n/2) + Cn
         = 2[2T(n/4) + (Cn)/2] + Cn
         = 2^2T(n/2^2) + 2Cn
         = 2^3T(n/2^3) + 3Cn
         ...
         = 2^kT(n/2^k) + kCn
         = nT(1) + cn(logn)
         = nC0 + cn(logn)
         = theta(nlogn)
*/