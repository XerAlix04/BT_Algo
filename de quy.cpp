#include <bits/stdc++.h>
using namespace std;
int gt(int n){
	if (n==1) return 1;
	else return n*gt(n-1);
}
int UCLN(int a, int b){
	if (a==b) return a;
	else if (a>b) return UCLN(a-b,b);
	else return UCLN(a,b-a);
}
