#include <stdio.h>
int main(){
	FILE *f;
	float a[1000], s=0;
	int i, j, t, n = 0;
	f = fopen("input.txt","rt");
	while (!feof(f)){
		n++;
		fscanf(f,"%f",&a[n]);
		s+=a[n];
	}
	printf("Trung binh cong cua day trong file la: %.2f", s/n);
	for (i=1;i<=n;++i)
		for (j=1;j<=n;++j)
			if (a[i]<a[j]){
				t=a[i]; a[i]=a[j]; a[j]=t;
			}
	printf("\nTrung vi cua day trong file la: %.2f", a[n/2+1]);
}
