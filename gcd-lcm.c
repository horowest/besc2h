#include<stdio.h>

int gcd(int a, int b) {
	while(a != b) {
		if (a > b)
			a = a - b;
		else
			b = b - a;
	}
	return b;
}

int lcm(int a, int b) {
	return (a*b)/gcd(a, b);
}

int main() {
	int a, b;
	
	scanf("%d %d", &a, &b);
	printf("gcd: %d\n", gcd(a, b));
	printf("lcm: %d\n", lcm(a, b));
	
	return 0;
}
