#include<stdio.h>

int main() {
	int n, m, a[100], b[100], k;
	int i, j;
	scanf("%d%d", &n, &m);
	for(i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	for(i = 0; i < m; i++) {
		scanf("%d", &b[i]);
	}
	scanf("%d", &k);
	for(i = 0; i < k; i++) {
		printf("%d ", a[i]);
	}
	for(i = 0; i < m; i++) {
		printf("%d ", b[i]);
	}
	for(i = k; i < n; i++) {
		printf("%d ", a[i]);
	}
	return 0;
}

