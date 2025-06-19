#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n){
    if(n<2) return false;
    for(int i = 2; i <= sqrt(n); i++){
        if(n%i==0) return false;
    }
    return true;
}

vector<int> superPrimeNumber(int n){
    queue<int> q;
    vector<int> v;
    for (int i = 2; i <= 10; i++){
        if(isPrime(i)) q.push(i);
    }

    while (!q.empty()){
        for (int i = 1; i <= 9; i+=2){
            int k = q.front()*10 + i;
            if(k <= n && isPrime(k)){
                q.push(k);
            }
        }
        v.push_back(q.front());
        q.pop();
    }

    return v;
}

int main(){
    int n;
    cout<<"Nhap vao mot so";
    cin>>n;
    vector<int> spn = superPrimeNumber(n);
    cout<<"Day so sieu nguyen to la:"<<endl;
    for (auto x: spn){
        cout<<x<<" ";
    }
    return 0;
}