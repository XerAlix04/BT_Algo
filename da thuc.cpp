#include <bits/stdc++.h>
using namespace std;
int main(){
	// nhap xuat 2 da thuc P(x)= a0+a1x+...+anx^n & Q(x)= b0+b1x+...+bmx^m
	int n, m; double a[1000], b[1000];
	printf ("Nhap n:\n"); scanf ("%d", &n);
	printf ("Nhap m:\n"); scanf ("%d", &m);
	for (int i=0; i<=n; i++){
		printf ("a[%d]= \n", i);
		scanf ("%lf", &a[i]);
	}
	for (int i=0; i<=m; i++){
		printf ("b[%d]= \n", i);
		scanf ("%lf", &b[i]);
	}
	printf ("Da thuc P vua nhap la: ");
	for (int i=0; i<=n; i++){
		if (i==0) printf("%.3lf", a[i]);
		else if (i==1) printf (" + %.3lf * x", a[i]);
		else printf (" + %.3lf * x^%d", a[i], i);
	}
	printf ("Da thuc Q vua nhap la: ");
	for (int i=0; i<=m; i++){
		if (i==0) printf("%.3lf", b[i]);
		else if (i==1) printf (" + %.3lf*x", b[i]);
		else printf (" + %.3lf*x^%d", b[i], i);
	}
	// nhap so thuc t tinh sqrt(P(t)/Q(t))
	double P, Q, t;
	printf ("Nhap t: ");
	scanf ("%lf", &t);
	for (int i=0; i<=n; i++){
		P = P + a[i]*(t^i);
	}
	for (int i=0; i<=m; i++){
		Q = Q + b[i]*(t^i);
	}
	printf ("sqrt( P(t) / Q(t) ) = %.4lf", P/Q);
	// nhap z tinh p'(z)*q'(z)









}
