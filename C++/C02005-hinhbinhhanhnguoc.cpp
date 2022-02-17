#include<stdio.h>

int main() {
	int a, b;
	int i, j, k;
	scanf("%d%d", &a, &b);
	k = 0;
	for(i = 0; i < a; i++) {
		if(k > 0) {
			for(j = 0; j < k; j++) {
				printf("~");
			}
		}
		for(j = 0; j < b; j++) {
			printf("*");
		}
		k++;
		printf("\n");
	}
	return 0;
}

