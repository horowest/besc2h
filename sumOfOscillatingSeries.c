// Write a program to compute the sum of the first n terms of the following series,
// S =1-2+3-4+5…………….

#include<stdio.h>
#include<math.h>

int main() {
	int i, n, sum = 0;
	scanf("%d", &n);

	for(i = 1; i <= n; i++)
		sum = sum + i*pow(-1, i+1); 

	printf("Sum of 1 to %d : %d", n, sum);
	return 0;
}
