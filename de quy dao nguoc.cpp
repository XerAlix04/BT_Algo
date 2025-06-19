#include <bits/stdc++.h>
using namespace std;
void reverse(char *s, int n){
	if (n>1) reverse (a+1, n-1);
	printf ("%c", *a);
}
int main(){
	char s[]; 
	gets(s);
	int n = strlen(s);
	reverse(s,n);
}

/*void reverse (char* str){
	int len = strlen(str);
	char *start = str, *end = str + len - 1;
	while (start<end){
		char temp = *start;
		*start = *end;
		*end = temp;
		start++;
		end--;
	}
}/*
