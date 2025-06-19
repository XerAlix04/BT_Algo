#include <stdio.h>
int main(){
	FILE *f;
	int m, n;
	char tenf[30];
	printf("Nhap ten file: ");
	gets(tenf);
	f=fopen(tenf,"rt");
	fscanf(f,"%d%d",&m,&n);
	float a[m+3][n+3];
	for (int i=1; i<=m; ++i){
		for (int j=1; j<=n; ++j){
			fscanf (f, "%f", &a[i][j]);
		}
	}
	for (int i=1; i<=m; ++i){
		for (int j=1; j<=n; ++j){
			printf("%.3f ", a[i][j]);
		}
		printf("\n");
	}
	int max_am_m, max_am_n; float max_am=-1000000, max_cot[n+3], tong_hang[m+3];
	for (int i=1; i<=m; ++i){
		for (int j=1; j<=n; ++j){
			if (a[i][j]<0&&a[i][j]>max_am){
				max_am=a[i][j];
				max_am_m=i; max_am_n=j;
			}
		}
	}
	printf("\nPhan tu co gia tri am lon nhat cua ma tran la: [%d][%d]", max_am_m, max_am_n);
	for (int j=1; j<=n; ++j){
		max_cot[j]=-1000000;
		for (int i=1; i<=m; ++i){
			if (a[i][j]>max_cot[j]) max_cot[j] = a[i][j];
		}
		printf("\nGia tri lon nhat tren cot %d la: %.3f", j, max_cot[j]);
	}
	for (int i=1; i<=m; ++i){
		tong_hang[i]=0;
		for (int j=1; j<=n; ++j){
			tong_hang[i]+=a[i][j];
		}
		printf("\nTong cac phan tu tren hang %d la: %.3f", i, tong_hang[i]);
	}
}

