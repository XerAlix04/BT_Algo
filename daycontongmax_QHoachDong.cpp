//http://laptrinhonline.club/problem/tichpxdclttm
#include<bits/stdc++.h>
using namespace std;
//O(n)

int main(){
    int n; cin>>n;
    long long a[n+5], m=0;
    for(int i=1; i<=n; i++) cin>>a[i];
    long long c[n+5]={0};
    for(int i=1; i<=n; i++){
        c[i]=max(c[i-1],m) + a[i];
    }
    long long res = *max_element(c+1, c+n+1);
    cout<<res;
}

/*
long n,x,c,res;
cin>>n>>c;
res=c;
while(--n){
    cin>>x;
    c=(c>0?c:0)+x;
    res=max(res,c);
}
cout<<res;
*/