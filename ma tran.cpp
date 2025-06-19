#include<bits/stdc++.h>
using namespace std;
int main(){
	int n, a[100][100];
	printf ("Nhap n"); scanf("%d", &n);
	for (int i=1; i<=n; i++){
		for (int j=1; j<=n; j++){
			printf("a[%d][%d]=",i,j);
			scanf("%d", &a[i][j]);
		}
	}
	printf("\nMa tran vua nhap la:\n");
	for (int i=1; i<=n; i++){
		for (int j=1; j<=n; j++){
			printf ("%3d/n", a[i][j]);
		}
	}
	//tong cua hang, hang co tong lon nhat
	int maxsum=-INT_MAX, hangmax=-1;
	for (int i=1; i<=n; i++){
		int sum=0;
		for (int j=1; j<=n; j++) sum+=a[i][j];
		printf("\nTong hang %d la %d", i,sum);
		if (sum>maxsum) {
			maxsum = sum;
			hangmax = i;
		}
	}
	printf("\nHang co tong lon nhat la hang %d, co tong la %d", hangmax,maxsum);
	// tich cua cot, tat ca cac cot co tich nho nhat
	int mul[100], minmul = INT_MAX;
	for (int j=1; j<=n; j++){
		mul[j] = 1;
		for (int i=1; i<=n; i++){
			mul[j] = mul[j]*a[i][j];
		}
		printf("\nTich hang %d la %d", j,mul[j]);
		if (minmul>mul[j]) minmul = mul[j];
	}
	printf ("\nNhung cot co tich nho nhat la: ");
	for (int j=1; j<=n; j++) 
	if (mul[j]==minmul) printf("%d", j);
	//ma tran co la tam giac tren ko? neu co tinh dinh thuc
	int t=0, at=1;
	for (int i=1; i<=n; i++){
		for (int j=1; j<i; j++){
			if (a[i][j]!=0) t=1;
		}
	}
	if (t==0){
		printf ("\nMa tran nay la tam giac tren");
		for (int i=1; i<=n; i++)
		at*=a[i][i]; //dinh thuc tgtren=a11*a22*a33*...*ann
		printf ("\nDinh thuc cua ma tran = %d", at);
	}
	else printf ("\nMa tran nay khong phai la tam giac tren");
	// ktra mtran dx qua duong cheo chinh
	int YES=1;
	for (int i=1; i<=n && YES==1; i++){
		for (int j=1; j<i && YES==1; j++){
			if (a[i][j]!=a[j][i]) YES=0;
		}
	}
	printf(YES?"\nMa tran dx":"\nMa tran khong doi xung");
	//max cac ptu nam duoi duong cheo phu
	int maxp=-INT_MAX;
	for (int i=1; i<=n; i++){
		for (int j=n; j>n+1-i; j--){
			if (maxp<a[i][j]) maxp=a[i][j];
		}
	}
	printf("\nMax cac phan tu nam duoi dupng cheo phu la: %d", maxp);
	//tbc cac so chan nam tren duong cheo chinh
	int T=0, ch=0;
	for (int i=1; i<=n; i++){
		for (int j=n; j>=i; j--){
			if (a[i][j]%2==0){
				T+=a[i][j];
				ch++;
			}
		}
	}
	if (ch==0) printf("\nKhong co phan tu chan nao nam tren duong cheo chinh");
	else printf("\nTBC cac so chan nam tren duong cheo chinh: %d",T/ch);
	//nhap h,c =>tim tong cac pt nam tren dc qua hc // dc chinh
	int h,c, tong = 0;
	printf("\nNhap h,c:"); scanf("%d%d",h,c);
	for (int i=1; i<=n; i++){
		int j = i+c-h; //hc//dc chinh =>i-j=h-c
		if (1<=j&&j<=n) tong+=a[i][j];
	}
	printf("\nTong = ",tong);
	//in ra ma tran chuyen vi
	for (int j=1; j<=n; j++){
		for (int i=1; i<=n; i++){
			printf("\n%3d\n",a[i][j]);
		}
	}
}
