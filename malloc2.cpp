#include <stdio.h>
#include <stdlib.h>
typedef struct{
	int ngay, thang, nam;
}date;
typedef struct{
	char ht[30];
	int luong;
	date DOB;
}nhanvien;
int main(){
	int n, i, d;
	nhanvien *nv
	char tenf[20];
	printf("So nhan vien: ");
	scanf("%d", &n);
	nv = (nhanvien*)malloc(n*sizeof(nhanvien));
	for (i=0; i<n; ++i){
		printf("\nNhan vien %d\n", i+1);
		fflush(stdin);
		printf("Ten: ");
		gets(nv[i].ht);
		printf("\nNgay sinh (dd mm yy): ");
		scanf ("%d%d%d", &nv[i].DOB.ngay, &nv[i].DOB.thang, &nv[i].DOB.nam);
		printf("\nLuong: ");
		scanf("%f", &nv[i].luong);
	}
}
