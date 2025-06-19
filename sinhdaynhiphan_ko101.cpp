#include<bits/stdc++.h>
using namespace std;

string s="01";

void Try(string x, int n){
    if(x.size()==n){
        cout<<x<<"\n"; return;
    }
    Try(x+"0",n);
    if(x.size()<2 or not(x[x.size()-2]=='1' && x[x.size()-1]=='0')) Try(x+"1",n);
    //for(auto c:s) Try(x+c, n);
}
int main(){
    int n;
    cin>>n;
    Try("",n);
}