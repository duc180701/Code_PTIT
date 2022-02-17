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
			if(i == 0 || i == a - 1 || j == 0 || j == b - 1) {
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

