#include<stdio.h>

int main() {
	int n, a[100];
	int i, j, tmp, k, max;
	scanf("%d", &n);
	for(i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	for(i = 0; i < n - 1; i++) {
		for(j = i + 1; j < n; j++) {
			if(a[i] > a[j]) {
				tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
	}
	max = a[n - 1];
	k = n - 1;
	while(a[k] == max) k--;
	max = a[k];
	printf("%d %d", a[n - 1], max);
	return 0;
}
