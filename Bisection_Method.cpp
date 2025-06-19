//Cho f(x) = x^3-x-1=0
//a: Ch/m [1,2] la khoang phan li
//b: Lap trinh tim n0 = pp chia doi

/* Program: Finding real roots of nonlinear
   equation using Newton Raphson Method
   Author: CodeSansar
   Date: November 18, 2018 */
#include<iostream>
#include<iomanip>
#include<math.h>
#include<stdlib.h>

/* Defining equation to be solved.
   Change this equation to solve another problem. */
#define    f(x)    x*x*x - x -1

/* Defining derivative of g(x).
   As you change f(x), change this function also. */
#define   g(x)   3 + sin(x)

using namespace std;

int main(){
	float a, b, err,x0,saiso;
	int it = 1, max_it=100;
	
	 /* Setting precision and writing floating point values in fixed-point notation. */
     cout<< setprecision(6)<< fixed;

     /* Inputs */
	 cout<<"Nhap a, b, err: ";
	 cin>>a>>b>>err;
	 /* Implementing Bisection Method */
	 cout<< endl<<"*********************"<< endl;
	 cout<<"Bisection Method"<< endl;
	 cout<<"*********************"<< endl;
	 do
	 {
		x0 = (a+b)/2;
		if(f(x0)*f(a)>0){
			a=x0;
		}
		else 
			b=x0;
		saiso=fabs(b-a);
		cout<<"Iteration-"<< it<<":\t x = "<< setw(15)<< x0 <<"\t sai so: "<<setw(15)<<saiso<< endl;
		it++;
	 }while(fabs(b-a)>=err);

	 cout<< endl<<"Nghiem gan dung: "<< x0;
	 return 0;
}
