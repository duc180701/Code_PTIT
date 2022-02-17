#include<stdio.h>

int main() {
	int n, i, j, k;
	scanf("%d", &n);
	k = 1;
	for(i = 0; i < n; i++) {
		for(j = 0; j < k; j++) {
			if(i == 0 || i == 1 || i == n - 1 || j == 0 || j == k - 1) {
				printf("*");
			} else {
				printf(".");
			}
		}
		k++;
		printf("\n");
	}
	return 0;
}

