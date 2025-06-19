#include <stdio.h>
int main(){
	FILE *f;
	char tenf[30];
	int n;
	printf ("Nhap ten file: ");
	gets (tenf);
	f = fopen(tenf,"rt");
	fscanf(f, "%d\n", &n);
	float x[n+3], y[n+3];
	for (int i=1; i<=n; ++i){
		fscanf(f, "%f%f\n", &x[i], &y[i]);
	}
	for (int i=1; i<=n; ++i){
		printf("%.2f %.2f\n", x[i], y[i]);
	}
	int trong=0, ngoai=0;
	for (int i=1; i<=n; ++i){
		if (x[i]*x[i]+y[i]*y[i]>25) ngoai++;
		else trong++; 
	}
	printf("\nSo diem nam ben ngoai va ben trong duong tron tam O ban kinh = 5 lan luot la: %d; %d", ngoai, trong);
	int dx=0;
	for (int i=1; i<=n; ++i){
		for (int j=i+1; j<=n; ++j){
			if (x[i]==-x[j]&&y[i]==-y[j]) dx++;
		}
	}
	printf("\nSo cap diem doi xung nhau qua goc toa do la: %d", dx);
}
