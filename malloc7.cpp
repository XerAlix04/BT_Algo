#include <stdio.h>
#include <stdlib.h>
typedef struct{
	char ht[30];
	float toan, ly, hoa;
}thisinh;
void doc(FILE *f, int n, thisinh *ts[]){
	fscanf (f, "%d\n", &n);
	ts = (thisinh*)malloc(n*sizeof(thisinh));
	for (int i=1; i<=n; ++i){
		fscanf(f, "%s%f%f%f\n", &ts[i].ht, &ts[i].toan, &ts[i].ly, &ts[i].hoa);
	}
}
void tim_thi_sinh(thisinh *ts[], int n, char tim[]){
	int c=0;
	for (int i=1; i<=n; ++i){
		ts[i].ht[strcspn(ts[i].ht, "\n")]='\0';
		if (strcmp(ts[i].ht, tim)==0){
			printf("%s:\nToan: %.2f, Ly: %.2f, Hoa: %.2f", ts[i].ht, ts[i].toan, ts[i].ly, ts[i].hoa);
			c=1;
		}
	}
	if(c==0) printf ("Khong co thi sinh nao co ten nay");
}
void in_thi_sinh_trung(FILE *p, int n, float chuan, thisinh *ts[]){
	p = fopen("OUT.txt", "wt");
	for (int i=1; i<=n; ++i){
		if ((ts[i].toan + ts[i].ly + ts[i].hoa)>=chuan){
			fprintf(p, "%s:\nToan: %.2f, Ly: %.2f, Hoa: %.2f\n", ts[i].ht, ts[i].toan, ts[i].ly, ts[i].hoa);
		}
	}
}
int main(){
	FILE *f, *p;
	char tenf[30], tim[30];
	thisinh *ts;
	float chuan;
	int n;
	printf ("Ten tep: ");
	gets(tenf);
	f = fopen(tenf, "rt");
	doc(f,n,ts);
	printf("\nThi sinh ban muon tra cuu: ");
	gets(tim);
	tim_thi_sinh(ts, n, tim);
	printf ("\nNhap diem chuan: ");
	scanf ("%f", &chuan);
	in_thi_sinh_trung(p, n, chuan, ts);
}
