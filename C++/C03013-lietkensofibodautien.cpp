#include<stdio.h>

int fb(int n, int a[]) {
	a[0] = 0;
	a[1] = 1;
	for(int i = 2; i < n; i++) {
		a[i] = a[i - 1] + a[i - 2];
	}
	for(int i = 0; i < n; i++) {
		printf("%d ", a[i]);
	}
}

int main() {
	int a[50];
	int n;
	int x;
	scanf("%lld", &n);
	fb(n, a);
	return 0;
}

