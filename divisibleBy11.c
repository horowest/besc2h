#include<stdio.h>

void isDivisible(int n) {
	 int pos = 1, a, odd= 0, even = 0;
	 
	 while(n > 0) {
	 	a = n%10;
	 	n = n/10;
	 	if(pos%2 == 0)
	 		even += a;
	 	else
	 		odd += a;
		pos++;
	}
	 
	if(odd == even)
	 	printf("Divisible by 11");
	else
		printf("Not divisible by 11");
}

int main() {
	int n;
	scanf("%d", &n);
	 
	isDivisible(n);
	
	return 0;
 }
