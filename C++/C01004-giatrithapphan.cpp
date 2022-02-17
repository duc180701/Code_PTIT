#include<stdio.h>

int main() {
	long long n;
	int testCase;
	scanf("%d", &testCase);
	while(testCase--) {
		scanf("%lld", &n);
		printf("%.15f\n", (double)1 / n);
	}
	return 0;
}

