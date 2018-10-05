#include<stdio.h>
#include<math.h>

int d2b(int d) {
	int s = 0, a,i=1;
	
	while (d > 0) {
		a = d % 2;
		d = d/2;
		s = s + a*i;
		i=i*10;
		//printf("%d %d %d", s, d, a);
	}
	return s;
}

int b2d(int b) {
	int i = 0, d = 0, a;
	
	while(b > 0) {
		a = b % 10;
		b = b / 10;
		d = d + a*pow(2, i);
		i++;
	}
	
	return d;
}

int main() {
	int n;
	
	printf("Type 0 for Decimal to Binary\n");
	printf("Type 1 for Binary to Decimal\n")
	scanf("%d", &n);
	
	if(n == 0)
		printf("%d", d2b(n));
	else if (n == 1) 
		printf("%d", b2d(n));
		
	return 0;
}
