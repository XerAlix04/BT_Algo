#include <bits/stdc++.h>
using namespace std;
double f(double x){
 return -3*x*x*x+3*x*x-0.75*x+0.377; }//x^3=x+1 <=> x=g(x)= pow(x+1, 1/3)
double g(double x){ 
pow(x*x-0.25*x+377/3000, 1/3.0) ;} //g'(x) = 1/(3*pow((x+1)^2),1/3)
int main(){ 
	float x0, x1, k, ep, err; 
	int it = 1, max_it=100;
	cout<<"Nhap x0, k, error"; //g'(x)<=k<1
	cin>>x0>>k>>ep;
	do{
		x1 = g(x0);
		err = fabs(x1-x0);
		cout<<"Iteration-"<< it<<":\t x = "<< setw(15)<< x0 <<"\t sai so: "<<setw(15)<<err<< endl;
		it++;
		x0 = x1;
	} while (err>=ep*(1-k)/k||it<101); //CT sai so
	cout<<x1;
}
