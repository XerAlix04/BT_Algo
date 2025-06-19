#include <stdio.h>
void doc_diem(FILE *f, float x[], float y[], int *n){
	int i;
	fscanf(f, "%d\n", n);
	for(i=1; i<=*n; ++i){
		fscanf(f, "%f%f\n", &x[i], &y[i]);
	}
}
float tong_kc(float x[], float y[], int n){
	int i;
	float s=0;
	for(i=1; i<=n; ++1){
		s+=fabs(y[i]);
	}
}
float do_dai(float x[], float y[], int n){
	float max=0, d[2][2];
	for(int i=1; i<=n; ++i){
		for(int j=1; j<=n; ++j){
			float temp = sqrt((x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j]));
			if(temp>=max){
				d[0][0]=x[i];
				d[0][1]=x[j];
				d[1][0]=y[i];
				d[1][1]=y[j];
				max=temp;
			}
		}
	}
	printf("\nTrong cac doan thang co dau mut la cac diem tren, doan thang dai nhat la: (%.2f,%.2f)-(%.2f,%.2f)", d[0][0],d[1][0],d[0][1],d[1][1]);
}
int main(){
	FILE *f;
	float x[50], y[50];
	f=fopen("toado.txt", "rt");
	doc_diem(f,x,y,n);
	for(i=1; i<=n; ++i){
		printf ("\n%6.1f%6.1f", x[i], y[i]);
	}
	printf("\nTong khoang cach den truc hoanh la: %.2f", tong_kc(x,y,n));
}
