#include <bits/stdc++.h>
using namespace std; //x^3=x+1 <=> x=g(x)= pow(x+1, 1/3)
#define g(x) pow(x+1, 1/3.0) //g'(x) = 1/(3*pow((x+1)^2),1/3)
double f(double x){
	return x*x*x-x-1;
}
int main(){
	float a,b,eps,x,err;
	int it = 1;
	cout<<"Nhap doan phan ly [a,b], err";
	cin>>a>>b>>eps;
	do{
		x=(a*f(b)-b*f(a))/f(b)-f(a);
		if (f(a)*f(x)<0) b=x;
		else a=x;
		err=fabs(b-a);
		cout<<"Iteration-"<< it<<":\t x = "<< setw(15)<< x <<"\t sai so: "<<setw(15)<<err<< endl;
		it++;
	}while (err>eps||abs(f(x))>eps||it<100);
	cout<<"Nghiem theo pp day cung: "<<x;
	return 0;
}
