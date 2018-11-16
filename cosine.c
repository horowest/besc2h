#include<stdio.h>
#include<math.h>

int fact(int n) {
	int i, f = 1;
	for(i = 1; i <= n; i++) {
		f = f*i;
	}
	return f;
}

int main() {
	int n, i, no;
	float x, sum = 0;
  	printf("Degree: ");
	  scanf("%f", &x);
  	printf("No. of terms: ");
	  scanf("%d", &n);
	
	x = (x*3.14)/180;
	for(i = 0; i < n; i++) {
		no = 2*i + 1;
		sum += pow(-1, i)*pow(x, no)/fact(no);
	}	
	
	printf("%.4f", sum); 
}
