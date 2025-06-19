//http://laptrinhonline.club/problem/mah2
#include<bits/stdc++.h>
using namespace std;

// int n, dem=0, x[100];
// map<int, int> C, P, A;
// void TRY(int k){
//     if(k-1==n){
//         cout<<"\n"<<++dem<<" : ";
//         for(int i=1; i<=n; i++) cout<<"("<<i<<","<<x[i]<<")";
//         return;
//     }
//     else{
//         for(int i=1; i<=n; i++){
//             if (A[i] == 0 && C[k-i]==0 && P[k+i]==0){
//                 A[i] = C[k-i] = P[k+i] = 1;
//                 x[k]=i;
//                 TRY(k+1);
//                 A[i]=C[k-i]=P[k+i]=0;
//             } 
//         }
//     }
// }

// int main(){
//     cin>>n;
//     TRY(1);
// }

int n, dem=0;
map<int, int> C, P, A;
void TRY(int k){
    if(k-1==n){
        dem++;
        return;
    }
    else{
        for(int t=1; t<=n; t++){
            if (A[t] == 0 && C[k-t]==0 && P[k+t]==0){
                A[t] = C[k-t] = P[k+t] = 1;
                TRY(k+1);
                A[t]=C[k-t]=P[k+t]=0;
            } 
        }
    }
}

int main(){
    cin>>n; //n: bàn cờ nxn 
    //C[0] = P[n+1] = 1;//bai tam hau http://laptrinhonline.club/problem/tichpx8hau -> ko hau nao tren dg cheo chinh & dg cheo phu
    TRY(1);
    cout<<dem;
}