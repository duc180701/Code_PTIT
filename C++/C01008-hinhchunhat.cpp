#include<stdio.h>

int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	if(a <= 0 || b <= 0) printf("0");
	else {
		printf("%d %d", (a + b) * 2, a * b);
	}
	return 0;
}

