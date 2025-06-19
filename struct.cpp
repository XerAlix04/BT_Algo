#include <bits/stdc++.h>
using namespace std;
struct diem {
	double x,y;
};
int main(){
	//nhap xuat diem
	int n;
	scanf("%d", &n);
	diem A[n+3];
	for (int i=1; i<=n; i++){
		printf ("Nhap diem A%d: ", i);
		scanf ("%lf%lf", &A[i].x, &A[i].y);
	}
	for (int i=1; i<=n; i++){
		printf ("Diem A%d: [%.3lf, %.3lf]", i, A[i].x, A[i].y);
	}
	//dem so nam trong nua tren duong tron (O,10)
	int dem1=0;
	for (int i=1; i<=n; i++){
		if (sqrt(A[i].x*A[i].x + A[i].y*A[i].y)<=10&&A[i].y>=0) dem1++;
	}
	if (dem1==0) printf ("Khong co diem nao nam trong nua tren duong tron (O,10)");
	else printf("So diem nam trong nua tren duong tron (O,10) la: %d", dem1);
	//tinh S htron tam la mot trong nhung diem A nho nhat chua tat ca cac diem
	double kc, R=DBL_MAX, max=0;
	for (int i=1; i<=n; i++){
		for (int j=1; j<=n; j++){
			kc = sqrt(pow(A[i].x-A[j].x,2)+pow(A[i].y-A[j].y,2));
			if (kc>max) max=kc;
		}
		if (R>max) R=max;
	}
	printf("S hinh tron: %.3lf", acos(-1)*R);
}
