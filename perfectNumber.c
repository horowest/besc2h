#include<stdio.h>

int isFactor(int n, int i) {
	if(n%i == 0) return 1;
	else return 0;
}

int main() {
	int n, i, s = 0;
	scanf("%d", &n);
	
	for(i = 1; i < n; i++) {
		if(isFactor(n, i))
			s = s + i;
	}
	
	if(s==n) printf("perfect\n");
	else printf("not perfect\n");
		
} 
