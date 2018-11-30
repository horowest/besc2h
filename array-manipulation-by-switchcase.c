#include<stdio.h>

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
 		printf("1. Insert\n");
		printf("2. Delete\n");
		printf("3. Display\n");
		printf("4. Exit\n");
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
