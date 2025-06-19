#include <stdio.h>
int main(){
	FILE *fp;
	int m, n, i, j, k;
	float max, a[i][j];
	fp = fopen("INP.txt","rt");
	if (fp==NULL){
		perror("Xay ra loi khi mo INP.txt");
		return(-1);
	}
	fscanf(fp, "%d", &m);
	fscanf(fp, "%d", &n);
	for (i=1;i<=m;i++){
		for (j=1; j<=n; j++){
			fscanf(fp, "%f", &a[i][j]);	
		}
	}
	for (i=1;i<=m;i++){
		for (j=1; j<=n; j++){
			printf ("%f", a[i][j]);
		}
		printf("\n");
	}
//in ra max tung cot
	for (j=1; j<=n; ++j){
		max = a[1][j];
		for (i=2; i<=m; ++i){
			if (a[i][j]>max) max = a[i][j];
		}
		printf("Max cua cot %d la: %.lf", j, max);
	}
}
