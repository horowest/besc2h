// 11. Write a program to calculate the factorial of an integer

#include<stdio.h>

int fact(int n) {
	int i, f = 1; 
	for(i = 1; i <= n; i++)
		f = f*i;
		
	return f;
} 


int main() {
	int i, n;
	scanf("%d", &n);
	
	printf("Factorial of %d is: %d", n, fact(n));
	return 0;
}
