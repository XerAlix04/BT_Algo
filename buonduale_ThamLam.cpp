//http://laptrinhonline.club/problem/tichpxbuonduale
#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n, k, m, x, res=0;
    cin>>n>>k>>m;
    queue<long long> Q;
    for(int i=1; i<=n+k-1; i++){
        if(i<=n) cin>>x;
        else x=0;
        Q.push(x);
        while(Q.size()>k) Q.pop(); //vứt bỏ số dưa tồn lại quá hạn
        int t=0; //số dưa thu dc
        while(Q.size() && Q.front()+t<=m){ //nếu số dưa chín + số dưa đã thu hnay < m => thu dc
            t+=Q.front();
            Q.pop();
        }
        if(Q.size()>0){ //nếu thu ko hết dc 
            Q.front()-=m-t; //để phần ko thu dc ở lại Q
            t=m; //thu dc m
        }
        res+=t;
    }
    cout<<res;
}