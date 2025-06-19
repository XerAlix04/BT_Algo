#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct{
	char hoten[30], truong[30];
	float diem;
}thisinh;
int main(){
	FILE *f;
	int n;
	f=fopen("input.txt","rt");
	fscanf (f, "%d", &n);
	thisinh *ts;
	ts=(thisinh*)malloc(n*sizeof(thisinh));
	for (int i=0; i<n; ++i){
		fgets(ts[i].hoten, sizeof(ts[i].hoten), f);
		ts[i].hoten[strcspn(ts[i].hoten,"\n")]='\0';
		fscanf(f,"%f\n", &ts[i].diem);
		fgets(ts[i].truong, sizeof(ts[i].truong), f);
	}
	for (int i=0; i<n; ++i){
		printf("%s\n%.3f\n%s", ts[i].hoten, ts[i].diem, ts[i].truong);
	}
}











