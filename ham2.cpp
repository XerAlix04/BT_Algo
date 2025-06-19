//dem so nghiem ax^4 + bx^2 + c = 0 => at^2 + bt + c = 0
#include <bits/stdc++.h>
using namespace std;
int dem (double t){
	return t>0?2:(t<0?0:1);
}
int main(){
	double a,b,c,d;
	cin>>a,b,c;
	if(a==0){
		if(b==0) printf(c==0?"vo so nghiem":"vo nghiem");
		else printf("%d", dem(-c/b));
	}
	else{
		b/=-2; //at^2-2bt+c=0
		d=b*b-a*c;
		if (d<0) printf("0");
		else if (d==0) printf ("%d", b/a);
		else printf ("%d", dem((b-sqrt(d))/a)+dem((b-sqrt(d))/a));
	}
}
