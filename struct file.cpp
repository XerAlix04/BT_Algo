#include <stdio.h>
typedef struct{
	char ht[30];
	float toan, ly, hoa, tong;
} thisinh;
int main(){
	FILE *f;
	int n;
	thisinh A[50], t;
	char tenfile[30];
	float chuan;
	printf ("Ten tep: "); gets(tenfile);
	f = fopen(tenf, "rt");
	//nhap du lieu
	fscanf(f, "%d\n", &n);
	for (int i=1; i<=n; ++i){
		fgets(A[i].ht, 30, f);
		A[i].ht[strlen(A[i].ht)-1]='\0';
		fscanf(f, "%f%f%f\n", &A[i].toan, &A[i].ly, &A[i].hoa);
		A[i].tong = A[i].toan + A[i].ly + A[i].hoa;
	}
	printf ("\nDiem chuan: ");
	scanf ("%f", &chuan);
	//sap xep theo tong diem
	for (int i=1; i<=n; ++i)
		for (int j=1; j<=n; ++j)
			if (A[j].tong>A[i].tong){
				t = A[i]; A[i] = A[j]; A[j] = t;
			}
	//in ds thi sinh trung tuyen
	printf("\nDanh sach thi sinh trung tuyen:\n");
	int d=0;
	for (int i=1; i<=n; ++i)
	
}
