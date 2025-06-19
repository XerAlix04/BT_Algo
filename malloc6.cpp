#include <stdio.h>
#include <stdlib.h>
int main(){
	int m, n, i, j, **a, s=0;
	FILE *f;
	char tenf[30];
	printf ("Ten tep: ");
	gets(tenf);
	f = fopen (tenf, "rt");
	fscanf (f, "%d%d", &m, &n);
	a = (int**)malloc(m*sizeof(int));
	for (i=0; i<m; ++i){
		a[i] = (int*)malloc(n*sizeof(int));
	}
	for (i=0; i<m; ++i){
		for (j=0; j<n; ++j){
			fscanf(f, "%d", &a[i][j]);
		}
	}
	for (i=0; i<m; ++i){
		for (j=0; j<n; ++j){
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	for (j=0; j<n; ++j){
		for (i=0; i<m; ++i){
			s+=a[i][j];
		}
		printf("Tong cot %d la: %d", j+1, s);
		s=0;
	}
}
