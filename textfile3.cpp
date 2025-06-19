#include <stdio.h>
int main(){
	FILE *f;
	float a[1000], s=0;
	int n = 0;
	f = fopen("input.txt","rt");
	while (!feof(f)){
		n++;
		fscanf(f,"%f",&a[n]);
		s+=a[n];
	}
	printf("Trung binh cong cua day trong file la: %.2f", s/n);
}
