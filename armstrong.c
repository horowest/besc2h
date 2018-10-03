#include<stdio.h>

int isArmstrong(int n) {
	int p = n, a, s = 0;
	
	while(n > 0) {
		a = n%10;
		n = n/10;
		s = s + a*a*a;
	}
	
	if(p == s) return 1;
	else return 0;
}

int main() {
	int n, i;
	scanf("%d", &n);
	
	if(isArmstrong(n)) printf("Armstrong\n");
	else printf("Not armstrong\n");
} 
