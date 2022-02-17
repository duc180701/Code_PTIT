#include<stdio.h>

int main() {
	long long n;
	int testCase;
	scanf("%d", &testCase);
	while(testCase--) {
		scanf("%lld", &n);
		printf("%lld\n", 2 * n);
	}
	return 0;
}

