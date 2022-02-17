#include<stdio.h>

int main() {
	long long n;
	scanf("%lld", &n);
	long long sum = 1;
	while(n > 0) {
		sum *= n % 10;
		n /= 10;
	}
	printf("%lld", sum);
	return 0;
}
