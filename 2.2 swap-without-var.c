#include<stdio.h>

int main() {
	int a, b, temp;
	scanf("%d %d", &a, &b);
	
	a = a + b;
	b = a - b;
	a = a - b; 
	
	print("a: %d  b: %d", a, b);
}
