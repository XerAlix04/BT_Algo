#include <stdio.h>
int main(){
	FILE *fp;
	int n, i, j;
	float max, a[i];
	fp = fopen("input.txt","rt");
	if (fp==NULL){
		perror("Xay ra loi khi mo input.txt");
		return(-1);
	}
	fscanf(fp, "%d", &n);
	for (i=1;i<=n;++i) fscanf(fp, "%f", &a[i]);
	//tim max
	max = a[1];
	for (i=2;i<=n;++i){
		if(a[i]>max) max = a[i];
	}
	printf ("Max cua day = %.2f",max);
	//sap xep va ghi vao tep output.txt
	for (i=1;i<=n;++i)
		for (j=1;j<=n;++j)
			if (a[i]<a[j]){
				t=a[i]; a[i]=a[j]; a[j]=t;
			}
	fp=fopen("output.txt", "wt");
	for (i=1;i<=n;++i)
		fprintf(fp, "%.2f", a[i]);
}
