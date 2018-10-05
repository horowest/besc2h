#include<stdio.h>

int main() {
	int n, i = 0, a = 0, b = 1, temp = 0;
	scanf("%d", &n);
	printf("%d %d ", a, b);
	
	for(i = 0; i < n-2; i++) {
		temp = a + b;
		a = b;
		b = temp;
		//if(temp > n)
		//	break;
		printf("%d ", temp);
	}
	// nth fibonacci number
	// printf("%d", temp);
	return 0;
}
