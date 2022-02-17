#include<stdio.h>

int process(long a) {
	int sum = 0;
	int n;
	long b = a;
	while(b > 0) {
		sum += b % 10;
		b /= 10;
	}
	return sum;
}

int main() {
	int testCase;
	long a;
	scanf("%d", &testCase);
	while(testCase--){
		scanf("%ld", &a);
		printf("%d\n", process(a));
	}
	return 0;
}

