//cau truc sinh vien
#include <bits/stdc++.h>
using namespace std;
struct SV{
	char HT[30];
	int Tuoi;
	double Diem;
};
int main(){
	// nhap xuat
	int n;
	SV A[1000];
	printf ("Nhap so SV n = "); scanf ("%d", &n);
	for (int i=1; i<=n; i++){
		printf("\nNhap TT SV: %d\n", i);
		printf ("Ho ten: ");
		fflush(stdin); scanf ("%[^\n]", &A[i].HT);
		printf ("\nTuoi: "); scanf ("%d", &A[i].Tuoi);
		printf ("\nDiem: "); scanf ("%lf", &A[i].Diem);
	}
	printf ("\n DS SV vua nhap:\n");
	for (int i=1; i<=n; i++){
		printf ("%-30s || %-5d || %.3lf\n", A[i].HT, A[i].Tuoi, A[i].Diem);
	}
	//Trong nhung sv diem cao nhat tim 1 sv tuoi lon nhat
	double M1 = -DBL_MAX;
	for (int i=1; i<=n; i++){
		if (A[i].Diem>M1) M1 = A[i].Diem;
	}
	int p=-1;
	for (int i=1; i<=n; i++){
		if (A[i].Diem==M1){
			if (p==-1) p=i;
			else if (A[i].Tuoi>A[p].Tuoi) p=i;
		}
	}
	printf ("HS can tim %s\n", A[p].HT);
	//Nhap Ho ten SV -> tim
	char ten[30];
	printf ("Nhap ten SV: ");
	fflush(stdin);
	scanf ("%[^\n]", &ten);
	int OK=0;
	for (int i=1; i<=n; i++){
		if (strcmpi(A[i].HT, ten)==0){
			printf ("\nTim thay SV %s Diem %lf", A[i].HT, A[i].Diem);
			OK=1; break;
		}
	if (OK==0) printf ("\nKhong thay %s", ten);
	}
	//Sap xep ds
	for (int i=1; i<n; i++){
		for (int j=i+1; j<=n; j++){
			if (strcmp(A[i].HT,A[j].HT)>0){
				SV t = A[i];
				A[i] = A[j];
				A[j] = t;
			}
		}
	}
}
