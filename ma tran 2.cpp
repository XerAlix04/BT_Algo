#include<bits/stdc++.h>
using namespace std;
int main(){
	int n, m; double a[100][100];
	printf ("Nhap so hang n\n"); scanf("%d", &n);
	printf ("Nhap so cot m\n"); scanf("%d", &m);
	for (int i=1; i<=n; i++){
		for (int j=1; j<=m; j++){
			printf("a[%d][%d]=",i,j);
			scanf("%lf", &a[i][j]);
		}
	}
	printf("Ma tran vua nhap la:\n");
	for (int i=1; i<=n; i++){
		for (int j=1; j<=m; j++){
			printf ("%.3lf\n", a[i][j]);
		}
	}
	// tich cac ptu hang chan, cot le (a21*a23*...)
	double tich = 1;
	for (int i=2; i<=n; i = i+2){
		for (int j=1; j<=m; j = j+2){
			tich *= a[i][j];
		}
	}
	printf("Tich cac phan tu hang chan, cot le la: %.3lf\n", tich);
	// TBN cac ptu thuoc [3,7]
	double tbn, x=1; int c1;
	for (int i=1; i<=n; i++){
		for (int j=1; j<=m; j++){
			if (a[i][j]>=3&&a[i][j]<=7){
				x *= a[i][j];
				c1++;
			}
		}
	}
	if (c1==0) printf ("Ma tran khong co phan tu nao thuoc [3,7]\n");
	else printf ("TBN cac phan tu thuoc [3,7]= %.3lf\n", pow(x,1/c1));
	// Max cac ptu am, chi ra tat ca cac vi tri co max am
	double max = -DBL_MAX; int c2;
	for (int i=1; i<=n; i++){
		for (int j=1; j<=m; j++){
			if (a[i][j]<0&&a[i][j]>max){
				max=a[i][j];
				c2=1;
			}
		}
	}
	if (c2==0) printf("Ma tran khong co phan tu am\n");
	else{
		printf ("Max cac phan tu am la: %.3lf\n", max);
		printf ("Cac vi tri co max am la:\n");
		for (int i=1; i<=n; i++){
			for (int j=1; j<=m; j++){
				if (a[i][j]==max) printf ("[%d][%d]\n",i,j);
			}
		}
	}
	// tim diem yen ngua(saddle) (max theo hang, min theo cot)
	int d;
	for (int i=1; i<=n; i++){
		for (int j=1; j<=m; j++){
			int ok=1;
			for (int k=1; k<=m; k++){
				if (a[i][k]>a[i][j]){
					ok=0;
					break;
				}
			}
			for (int k=1; k<=n; k++){
				if (a[k][j]<a[i][j]){
					ok=0;
					break;
				}
			}
			if (ok){
				printf ("Diem yen ngua [%d][%d]\n", i,j);
				d++;
			}
		}
	}
	printf ("Co tat ca %d diem yen ngua", d);
}
