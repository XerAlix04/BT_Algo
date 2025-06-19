//http://laptrinhonline.club/problem/tichpxxccdn
#include <bits/stdc++.h>
using namespace std;

string x,y;
int n,m, C[1005][1005] = {};

void trace(int n, int m){
    if(C[n][m]==0) return;
    while(C[n][m]==C[n-1][m]) n--;
    while(C[n][m]==C[n][m-1]) m--;
    trace(n-1,m-1);
    cout<<x[n];
}

int main(){
    cin>>x; n=x.size(); x='$'+x;
    cin>>y; m=y.size(); y='$'+y;
    for(int i=1; i<=n; i++)
    for(int j=1; j<=m; j++)
    if(x[i]==y[j]) C[i][j]=1+C[i-1][j-1];
    else C[i][j]=max(C[i-1][j], C[i][j-1]);
    cout<<"\nDo dai xccdn "<<C[n][m]<<"\n";
    trace(n,m);
}