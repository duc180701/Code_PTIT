#include<stdio.h>

int main() {
	int n, a[100];
	int i, l, r, tmp;
	scanf("%d", &n);
	l = 0;
	r = n - 1;
	for(i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	while(l < r) {
		tmp = a[l];
		a[l] = a[r];
		a[r] = tmp;
		l++;
		r--;
	}
	for(i = 0; i < n; i++) {
		printf("%d ", a[i]);
	}
	return 0;
}

