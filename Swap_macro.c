#include<stdio.h>
#define m(a, b) a = a + b; b = a - b; a = a - b;

int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	 
	m(a, b);
	
	printf("%d %d", a, b);
	return 0;
 }
