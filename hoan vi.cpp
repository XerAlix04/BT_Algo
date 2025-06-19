#include <bits/stdc++.h>
using namespace std;
void hoan_vi (float *a, float *b) {
	float t;
	t = *a; *a=*b; *b=t;
}
int main(){
	float x = 5, y = 10;
	hoan_vi (&x, &y);
	printf("x = %f, y = %f", x,y);
}
