#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	double x[1000], y[1000];
	scanf("%d", &n);
	for (int i=1; i<=n; i++){
		scanf ("%lf%lf", &x[i], &y[i]);
	}
	for (int i=1; i<=n; i++){
		printf ("A%d(%.3lf,%.3lf)\n", i, x[i], y[i]);
	}
	//tinh duong gap khuc
	double l=0;
	for (int i=2; i<=n; i++){
		l = sqrt(pow(x[i]-x[i-1],2) + pow(y[i]-y[i-1],2));
	}
	printf ("Do dai duong gap khuc: %.3lf",l);
	//dem so diem thuoc goc phan tu II
	int dem = 0;
	for (int i=1; i<=n; i++){
		if (x[i]<=0&&y[i]>=0) dem ++;
	}
	//dem doan cat duong y=ax+b
	printf ("%d", dem);
	int dd = 0; double a,b;
	scanf("%lf%lf", &a,&b);
	//for (int i=1; i<=n; i++)
	//for (int j=i+1; j<=n; j++){
	//	double u=y[i]-a*x[i]-b, v=y[j]-a*x[j]-b;
	//	if(u*v<=0 && (u!=0 || v!=0)) dd++;
	//}
	int tren=0,duoi=0,thuoc=0;
	for (int i=1; i<=n; i++){
		if (y[i]>a*x[i]+b) tren++;
		else if (y[i]<a*x[i]+b) duoi++;
		else thuoc++;
	}
	dd=tren*duoi + tren*thuoc + duoi*thuoc;
	printf("%d", dd);
	//kc 2 diem xa nhat
	double kc=0;
	int p=1, q=1;
	for (int i=1; i<=n; i++)
	for (int j=i+1; j<=n; j++){
		double u=x[i]-x[j], v=y[i]-y[j];
		if (u*u+v*v>kc) kc=u*u+v*v; p=i; q=j;
	}
	printf("hai diem xa nhau nhat A%d va A%d vs kc %lf", p,q,sqrt(kc));
	//hinh tron tam O nho nhat
	double r=0;
	for (int i=1; i<=n; i++){
		double u=x[i]*x[i] + y[i]*y[i];
		if (u>r) r=u;
	}
	printf("Dien tich hinh tron %lf",acos(-1)*r); //pi=acos(-1) or M_PI
	//Dien tich hcn nho nhat
	double Mx=x[1], mx=x[1], My=y[1], my=y[1];
	for (int i=2; i<n; i++){
		if (Mx<x[i]) Mx=x[i];
		if (mx>x[i]) mx=x[i];
		if (My<y[i]) My=y[i];
		if (my>y[i]) my=y[i];
	}
	printf("\nDien tich HCN %lf", (Mx-mx)*(My-my));
	// doublle Mx=*max_element(x+1,x+n+1); //max tu x[1]...x[n]	
} 
