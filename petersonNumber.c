// 12.  Write a program to check whether a number is Peterson number or not 

#include<stdio.h>

int fact(int n) {
	int i, f = 1; 
	for(i = 1; i <= n; i++)
		f = f*i;
		
	return f;
} 


int main() {
	int i, n, sum, t;
	scanf("%d", &n);

	while(n > 0) {
		t = n%10;
		sum = sum + fact(t);
		n = n/10;
	}
		
	if(n == sum) printf("It is a Peterson Number");
	else printf("It is not a Peterson Number");
	return 0;
}
