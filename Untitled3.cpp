#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct{
	int id, nam;
	char sach[50], tacgia[30];
}book;

int main(){
	FILE *f;
	int n;
	f = fopen ("sach.txt", "rt");
	fscanf(f, "%d\n", &n);
	book *b;
	b = (book*)malloc(n*sizeof(book));
	for (int i=0; i<n; ++i){
		fscanf(f, "%d\n", b[i].id);
		fgets(b[i].sach,50,f);
		b[i].sach[strcspn(b[i].sach, "\n")]='\0';
		fgets(b[i].tacgia,30,f);
		fscanf(f, "%d\n", b[i].nam);
	}
	for (int i=0; i<n; ++i){
		printf ("%d\n%s\n%s\n%d\n", b[i].id, b[i].sach, b[i].tacgia, b[i].nam);
	}
	//tim sach theo ten
	char tim[50]; int c=0;
	printf ("Ten sach muon tim: "); gets(tim);
	for (int i=1; i<=n; ++i){
		if (strcmp(b[i].sach, tim)==0){
			printf("\n%d\n%-20s\n%-20s\n%d\n", b[i].id, b[i].sach, b[i].tacgia, b[i].nam);
			c=1;
		}
	}
	if(c==0) printf ("Khong co sach nao co ten nay");
	//sap xep
	
}
