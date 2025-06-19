#include<bits/stdc++.h>
using namespace std;
double f(double x){
	return ((x*x)/(7*x*x+6)*atan(x));
}
double tichphan(double x[], int n){
	double h=fabs(x[n]-x[0])/n;
	double s=f(x[0])+f(x[n]);
	for (int i=1;i<n;i++){
		s+=2*f(x[i]);
	}
	return s*0.1;
}
int main(){
	freopen("INP.TXT","r",stdin);
	int n;
	cin>>n;
	double x[n];
	
	for (int i=0;i<=n;i++)
		cin>>x[i];
	
		
	cout<<"ket qua: "<<tichphan(x,n);
		
}

