#include<stdio.h>

int main() {
	long long n;
	int testCase;
	scanf("%d", &testCase);
	while(testCase--) {
		scanf("%lld", &n);
		printf("%lld\n", (n + 1) * n / 2);
	}
	return 0;
}

