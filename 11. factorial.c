// 11. Write a program to calculate the factorial of an integer

#include<stdio.h>

int fact(int n) {
	int i, f = 1; 
	for(i = 1; i <= n; i++)
		f = f*i;
		
	return f;
} 


int main() {
	int i, n, s = 0, f;
	scanf("%d", &n);

	for(i = 1; i <= n; i++) {
		f = fact(i);
		s = s + f;
	}
		
	printf("Sum: %d", s);
	return 0;
}
