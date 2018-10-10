#include<stdio.h>

void merge(int A[], int beg, int mid, int end) {
	int n1 = mid - beg + 1;
	int n2 = end - mid;
	int L[n1], R[n2];
	int i = 0, j = 0, k = 0;
	
	for(k = beg; k <= mid; k++) 
		L[i++] = A[k];
	for(k = mid+1; k <= end; k++)
		R[j++] = A[k];
		
	i = 0;
	j = 0;
	k = beg;
	
	while(i < n1 && j < n2) {
		if(L[i] < R[j])
			A[k++] = L[i++];
		else
			A[k++] = R[j++];
	}
	
	while(i < n1)
		A[k++] = L[i++];
	while(j < n2)
		A[k++] = R[j++];
}

void mergesort(int A[], int beg, int end) {
	if(beg < end) {
		int mid = (beg + end)/2;
		mergesort(A, beg, mid);
		mergesort(A, mid+1, end);
		merge(A, beg, mid, end);
	}
}

int main() {
	int i, A[] = {5, 3, 1, 4, 6, 8, 7, 2};
	mergesort(A, 0, 7);
	
	for(i = 0; i < 8; i++)
		printf("%d ", A[i]);
}
