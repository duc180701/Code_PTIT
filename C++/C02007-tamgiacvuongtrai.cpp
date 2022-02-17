#include<stdio.h>

int main() {
	int n, i, j, k;
	scanf("%d", &n);
	k = 1;
	for(i = 0; i < n; i++) {
		for(j = 0; j < k; j++) {
			printf("*");
		}
		k++;
		printf("\n");
	}
	return 0;
}

