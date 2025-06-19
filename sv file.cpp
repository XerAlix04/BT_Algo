#include <stdio.h>
typedef struct{
	int mssv;
	char ht[30];
	float diem;
} sinhvien;
int main(){
	FILE *f;
	int n,i;
	sinhvien sv[100];
	printf ("Ten tep: ");
	gets(tenf);
	f=fopen(tenf, "rt");
	fscanf (f,"%d",&n);
	for (i=1; i<=n; ++i){
		fscanf(f,"%d\n",&sv[i].mssv);
		fgets(sv[i].ht, 30, f);
		fscanf(f,"%f",sv[i].diem);
	}
	float max = sv[1].diem;
	for (i=1; i<=n; ++i){
		if (sv[i].diem>max){
			max=sv[i].diem;
		}
	}
	for (i=1; i<=n; ++i){
		if (sv[i].diem=max){
			fprintf(f,"%d %s", sv[i].mssv, sv[i].ht);
		}
	}
}
