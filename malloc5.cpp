#include <stdio.h>
#include <stlib.h>
#include <math.h>
int main(){
	float *x, *y, s=0;
	int n, i, j;
	char tenf[30];
	FILE *f;
	printf("Ten tep: ");
	gets (tenf);
	f = fopen (tenf, "rt");
	fscanf(f, "%d", &n);
	x = (float*)malloc((n+1)*sizeof(float));
	y = (float*)malloc((n+1)*sizeof(float));
	for (i=1; i<=n; ++i)
		fscanf (f, "%f%f", x+i, y+i);
	for (i=1; i<=n-1; ++i)
		s += sqrt(pow(x[i]-x[i+1],2) + pow(y[i]-y[i+1],2));
	printf("Do dai duong gap khuc = %.2f", s);
}
