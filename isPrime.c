#include<stdio.h>

int isPrime(int n) {
	int i;
	if(n==1)
		return 0;
		
	for(i = 2; i < n; i++) {
		if (n%i == 0) 
			return 0;
	}
	return 1;
}

int main() {
	int n, i;
	scanf("%d", &n);
	
	if(isPrime(n)) printf("Prime\n");
	else printf("Not prime\n");	

	for(i = 1;  i < 100; i++)
		if(isPrime(i)) printf("%d ", i);
	
	return 0;
} 
