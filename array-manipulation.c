#include<stdio.h>

void oddElemet(int a[], int n, int odd) {
	int i;
	for(i = 0; i < n; i++) {
		if (a[i]%2 == odd) {
			printf("%d ", a[i]);
		}
	}
	printf("\n");
} 

int sum(int a[], int n) {
	int i = 0, s = 0;
	
	for(i = 0; i < n; i++)	
		s += a[i];
		
	return s;
}

int average(int a[], int n) {
	return sum(a, n)/n;
}

int max(int a[], int n) {
	int i = 0, max = 0;
	
	for(i = 0; i < n; i++) {
		if(a[i] > max)
			max = a[i];
	}
	return max;
}

int min(int a[], int n) {
	int i = 0, min = -1;
	
	for(i = 0; i < n; i++) {
		if(a[i] < min || min < 0)
			min = a[i];
	}
	return min;
}

void insertElement(int a[], int elm, int pos, int len) {
	int i;
	for(i = 9; i >= pos-1; i--) {
		//printf("inseting..\n");
		a[i+1] = a[i];
	}
	a[pos-1] = elm;
}

void deleteElement(int a[], int elm, int len) {
	int i = 0, j;
	while(a[i] != elm) {
		i++;
	}
	
	for(i = j; i < len; j++)
		a[i] = a[i+1];
}

void display(int a[], int len) {
	int i;
	for(i = 0; i < len; i++)
		printf("%d ", a[i]);
	printf("\n");
}

int main() {
	int a[10];
	int i, n, elm, pos, arrlen = 0;
	printf("No. of elements: ");
	scanf("%d", &arrlen);
	for(i = 0; i < arrlen; i++) {
		scanf("%d", &a[i]);
	}
	display(a, arrlen);
	
	do {
		printf("1. Print the Odd/Even elements\n");
		printf("2. Sum & avg. of elements\n");
		printf("3. Max & min of \n");
 		printf("4. Insert\n");
		printf("5. Delete\n");
		printf("6. Display\n");
		printf("7. Exit\n");
		scanf("%d", &n);
	
		switch(n) {
			case 1:
				printf("[element] [pos]: ");
				scanf("%d %d", &elm, &pos);
				insertElement(a, elm, pos, arrlen);
				arrlen++;
				break;
			case 2:
				scanf("%d", &elm);
				deleteElement(a, elm, arrlen);
				arrlen--;
				break;
			case 3:
				display(a, arrlen);
				break;
			default:
				printf("enter proper value\n");
		}
	
	} while(n!= 4);
	
	return 0;
 }
