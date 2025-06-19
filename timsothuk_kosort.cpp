#include<bits/stdc++.h>
using namespace std;

//sort->O(nlogn)
int main(){
    int n,k; cin>>n;
    int A[n+3]; for(int i=0; i<n; i++) cin>>A[i];
    sort(A, A+n);
    cin>>k; cout<<A[k];
}