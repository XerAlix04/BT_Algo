//bien luan a1x + b1y = c1 \n a2x + b2y = c2
#include <bits/stdc++.h>
using namespace std;
double dinhthuc(double a, double b, double c, double d)
{
	return a*d-b*c;
}
int main(){
	double a1, b1, c1, a2, b2, c2;
	cin>>a1>>b1>>c1;		
	cin>>a2>>b2>>c2;
	double D=dinhthuc(a1,b1,a2,b2);
	double Dx=dinhthuc(c1,b1,c2,b2);
	double Dy=dinhthuc(a1,c1,a2,c2);
	if(D==0) printf(Dx==0? "vo so nghiem":"vo nghiem");
	else printf ("x = %lf\ny = %lf", Dx/D, Dy/D);
}
