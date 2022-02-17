#include<stdio.h>

int fb(long long n, long long a[]) {
	a[0] = 0;
	a[1] = 1;
	for(long long i = 2; i <= n; i++) {
		a[i] = a[i - 1] + a[i - 2];
	}
	for(long long i = 0; i <= n; i++) {
		if(a[i] == n) return 1;
	}
	return 0;
}

int main() {
	long long a[10001];
	long long n;
	int x;
	scanf("%lld", &n);
	x = fb(n, a);
	printf("%d", x);
	return 0;
}

