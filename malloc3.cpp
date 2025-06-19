#include <stdio.h>
#include <stlib.h>
int main(){
	int m, n, *a;
	printf("Nhap M, N: ");
	scanf("%d%d", &m, &n);
	a = (int*)malloc(m*n*sizeof(int));
	for (int i=0; i<m; i++){
		for (int j=0; j<n; j++){
			printf("a[%d][%d]:",i+1, j+1)
			scanf("%d", a+n*i+j);
		}
	}
	for (int i=0; i<m; i++){
		for (int j=0; j<n; j++){
			printf("%4d", *(a+n*i+j));
		}
		printf("\n");
	}
	free(a);
}
