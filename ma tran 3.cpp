#include <bits/stdc++.h>
using namespace std;
void nhap(float a[][50], int m, int n){
	int i, j;
	for (i=1; i<=m; i++){
		for (j=1; j<=n; j++){
			printf ("a[%d,%d]=",i,j);
			scanf ("%f", &a[i][j]);
		}
	}
}
void xuat(float a[][50], int m, int n){
	int i, j;
	for (i=1; i<=m; i++){
		for (j=1; j<=n; j++){
			printf ("%5d", a[i][j]);
		}
		printf("\n");
	}
}
void nhamt(float a[][50], float b[][50], float c[][50], int m, int n, int p){
	int i, j, k;
	for (i=1; i<=m; i++){
		for (j=1; j<=n; j++){
			c[i][j]=0;
			for (k=1; k<=n; k++){
				c[i][j]+= a[i][k]*b[k][j];
			}
		}
	}
}
int main(){
	int m, n, p, i, j;
	float a[50][50], b[50][50], c[50][50];
	printf ("So hang, so cot ma tran a la: ");
	scanf ("%d%d", &m, &n);
	nhap(a,m,n);
	xuat(a,m,n);
	printf ("So hang, so cot ma tran b la: ");
	scanf ("%d%d", &n, &p);
	nhap(b,n,p);
	xuat(b,n,p);
	nhamt(a,b,c,m,n,p);
}
