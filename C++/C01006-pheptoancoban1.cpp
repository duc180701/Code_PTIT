#include<stdio.h>

int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	if(b == 0) printf("%d", b);
	else {
		float c = a, d = b;
		printf("%d ", a + b);
		printf("%d ", a - b);
		printf("%d ", a * b);
		printf("%.2f ", c / d);
		printf("%d", a % b);
	}
	return 0;
}

