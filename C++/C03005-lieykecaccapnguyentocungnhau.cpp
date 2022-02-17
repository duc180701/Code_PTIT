#include<stdio.h>

int gcd(int a, int b) {
	int i;
	if(a == 0 || b == 0) {
		return a + b;
	}
	while(a != b) {
		if(a > b) a -= b;
		else if(a < b) b -= a;
	}
	return a;
}

int main() {
	int a, b;
	int i, j;
	scanf("%d%d", &a, &b);
	for(i = a; i < b; i++) {
		for(j = i + 1; j <= b; j++) {
			if(i != j && gcd(i, j) == 1) {
				printf("(%d,%d)\n", i, j);
			}
		}
	}
	return 0;
}

