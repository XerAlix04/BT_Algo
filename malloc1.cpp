#include <stdio.h>
#include <stlib.h>
int main(){
	FILE *f;
	char tenf[20];
	int n, i, d=0, *a;
	printf("Ten file: ");
	gets(tenf);
	f = fopen (tenf, "rt");
	fscanf (f, "%d\n", &n);
	a = (int*)malloc((n+1)*sizeof(int));
	for (i=1; i<=n; ++i)
		fscanf (f, "%d", (a+i));
	printf("Cac bo ba so lien tiep lap thanh cap so cong la:");
	for (i=1; i<=n-2); ++i){
		if(a[i]+a[i+2]==2*a[i+1] || a[i]+a[i+1]==2*a[i+2] || a[i+1]+a[i+2]==2*a[i]){
			printf("\n%d %d %d", i, i+1, i+2);
			d+=1;
		}
	}
	printf("So bo thoa man = %d", d);
}
