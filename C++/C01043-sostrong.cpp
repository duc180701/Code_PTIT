#include<stdio.h>

int tinhgiaithua(int n) {
	int res = 1;
	for(int i = n; i >= 1; i--) {
		res *= i;
	}
	return res;
}

int main() {
	long long sum = 0;
	long long n, a;
	scanf("%lld", &n);
	a = n;
	while(n > 0) {
		sum += tinhgiaithua(n % 10);
		n /= 10;
	}
	if(sum == a) printf("1");
	else printf("0");
	return 0;
}

