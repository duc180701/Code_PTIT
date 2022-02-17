#include<stdio.h>

int main() {
	int n, a[99], k;
	int i;
	scanf("%d", &n);
	for(i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	scanf("%d", &k);
	for(i = n - k; i < n; i++) {
		printf("%d ", a[i]);
	}
	for(i = 0; i < n - k; i++) {
		printf("%d ", a[i]);
	}
	return 0;
}

