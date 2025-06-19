#include <stdio.h>
#include <stlib.h>
typedef struct{
	char ht[30];
	float diem;
}sinhvien;
int main(){
	int n, i;
	sinhvien *sv;
	printf("Nhap so sinh vien: ");
	scanf("%d", &n);
	sv = (sinhvien*)malloc(n*sizeof(sinhvien));
	for (i=1; i<=n; ++i){
		printf ("\nSinh vien so %d:", i);
		fflush(stdin);
		printf ("\nTen: ");
		gets(sv[i].ht);
		printf ("\nDiem: ");
		scanf ("%f", sv[i].diem);
	}
	for (i=1; i<=n; ++i){
		printf("Sinh vien %d:\n%s: %.2f", i, sv[i].ht, sv[i].diem);
	}
}
