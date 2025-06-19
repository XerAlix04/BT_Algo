//http://laptrinhonline.club/problem/tichpxsapxepbalo
#include <bits/stdc++.h>
using namespace std;

int n,M,a[105],b[105],C[105][10005]={};
void trace(int n, int M){
    if(C[n][M]==0) return;
    while(C[n][M]==C[n-1][M]) n--;
    trace(n-1,M-a[n]);
    cout<<"\nChon vat kt "<<a[n]<<" gt "<<b[n];
}

int main(){
    cin>>n>>M;
    for(int i=1; i<=n; i++){
        cin>>a[i]>>b[i];
        for(int j=1; j<=M; j++){
            C[i][j]=j<a[i]?C[i-1][j]:max(C[i-1][j], b[i]+C[i-1][j-a[i]]);
        }
    }
    cout<<"\nGia tri max "<<C[n][M]<<"\n";
    trace(n,M);
}

/*
int main(){
    int n, M=1e4, a, b, q, C[10005] = {};
    cin>>n;
    for(int i=1; i<=n; i++){
        cin>>a>>b;
        for(int j=M; j>=a; j--)
        C[j]=max(C[j],b+C[j-a]);
    }
    cin>>q;
    while(q--){
        cin>>M;
        cout<<C[M]<<"\n";
    }
}
*/
