//http://laptrinhonline.club/problem/d396a2qd


#include <bits/stdc++.h>
using namespace std;

int mymax(int a, int b) {return a>b?a:b;}

int main(){
    int n, res;
    cin>>n;
    vector<int> A(n), B(n), C(n);
    for (auto &x:A) cin>>x;
    partial_sum(A.begin(), A.end(), B.begin(), mymax);
    partial_sum(A.rbegin(), A.rend(), C.rbegin(), mymax);
    for (int i=1; i<n-1; i++){
        res+=max(min(B[i-1],C[i+1])-A[i],0);
    }
    cout << res;
}
