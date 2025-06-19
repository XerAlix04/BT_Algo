#include <bits/stdc++.h>
using namespace std;
int ptb2 (float a, float b, float c, float *x1, float *x2){
	float d;
	d = b*b - 4*a*c;
	if (d<0) return 0;
	if (d==0) {
		*x1 = -b/(2*a);
		*x2=*x1;
		return 1;
	}
	if (d>0){
		*x1 = (-b+d)/(2*a);
		*x2 = (-b-d)/(2*a);
		return 2;
	}
}
int main(){
	float a, b, c, *nghiem1, *nghiem2, kt;
	scanf ("%f%f%f", &a, &b, &c);
	kt = ptb2 (a, b, c, nghiem1, nghiem2);
	if (kt==0) printf ("Phuong trinh vo nghiem");
	if (kt==1) printf ("Phuong trinh co nghiem kep la %f", nghiem1);
	if (kt==2) printf ("Phuong trinh co hai nghiem la %f va %f", nghiem1, nghiem2);
}
