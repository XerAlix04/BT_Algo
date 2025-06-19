#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[]={4,7,8,10,10,10,10,15,17,17,20,25,35,35,46}, n=sizeof(a)/sizeof(a[0]);
    int *p=lower_bound(a,a+n,10); //tra ve con tro tro vao vtri dau tien >=10
    cout<<"\nGia tri "<<p<<" vi tri "<<p-a;
    int *q=upper_bound(a,a+n,10); //tra ve con tro tro vao vtri dau tien >10
    cout<<"\nGia tri "<<q<<" vi tri "<<q-a;
}