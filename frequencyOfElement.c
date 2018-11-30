#include<stdio.h>

int freq(int a[], int elm, int len) {
	int i, count = 0;
	
	for(i = 0; i < len; i++) {
		if(a[i] == elm)
			count++;
	}
	
	return count;
}

int main() {
	int a[10] = {1, 2, 3, 4, 3, 5, 5};
	int n;
	
	scanf("%d", &n);
	printf("%d", freq(a, n, 7));
	
	return 0;
 }
