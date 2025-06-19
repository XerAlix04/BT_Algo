#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {1,2,3,1,4,5,2,3,6};
    int k; cin>>k;
    priority_queue<int> pq;
    for(int i=0; i< (sizeof(arr)/sizeof(arr[0])) - (k-1); i++){
        pq.push(arr[i]);
        pq.push(arr[i+1]);
        pq.push(arr[i+2]);
        cout<<pq.top()<<" ";
        while (!pq.empty())
        {
            pq.pop();
        }
    }
}