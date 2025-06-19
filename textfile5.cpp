#include <stdio.h>
int main(){
	FILE *f;
	int m=0, n, k, i=0, j;
	float a[20];
	char c;
	f = fopen("matran.txt", "rt");
	while (!feof(f)){
		c=fgetc(f);
		if(c=="\n") m++;//so hang
	}
	fclose(f);
	f = fopen("matran.txt", "rt");
	while (!feof(f)){
		fscanf(f,"%f",&a[++i]);
	}
	k=i-1;
	n=k/m;//so cot
	printf("\nk = %d, m = %d, n = %d\n\n",k,m,n);
	for (j=1; j<=k; ++j){
		printf("%6.1f",a[j]);
		if (j%n==0) prinf("\n\n");
	}
}
