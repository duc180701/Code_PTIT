#include<stdio.h>

int main() {
	int n, a[100];
	int i, j, tmp, k, min;
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
	min = a[0];
	k = 0;
	while(a[k] == min) k++;
	min = a[k];
	printf("%d %d", a[0], min);
	return 0;
}
