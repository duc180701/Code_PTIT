#include<stdio.h>

int main() {
	int a, b, arr[10], i, j, k;
	int l, r;
	 
	scanf("%d%d", &a, &b);
	for(i = 0; i < b; i++) {
		arr[i] = i + 1;
	}
	for(i = 0; i < a; i++) {
		for(j = 0; j < b; j++) {
			printf("%d", arr[j]);
		}
		printf("\n");
		
	}
	return 0;
}

