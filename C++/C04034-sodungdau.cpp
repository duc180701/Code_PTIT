#include<stdio.h>

int check(int a[], int x, int n){
	int i;
	for(i = x + 1; i < n; i++) {
		if(a[x] <= a[i]) return 0;
	}
	return 1;
}

int main() {
	int b[1001];
	int n, i, j, k;
	int tmp;
	int testCase;
	scanf("%d", &testCase);
	while(testCase--) {
		scanf("%d", &n);
		int a[n + 1];
		for(i = 0; i < n; i++) {
			scanf("%d", &a[i]);
		}
		k = 0;
		for(i = 0; i < n; i++) {
			if(check(a, i ,n) == 1) {
				b[k] = a[i];
				k++;
			}
		}
		for(i = 0; i < k; i++) {
			for(j = 0; j < k; j++) {
				if(b[i] > b[j]) {
					tmp = b[i];
					b[i] = b[j];
					b[j] = tmp;
				}
			}
		}
		for(i = 0; i < k; i++) {
			printf("%d ", b[i]);
		}
		printf("\n");
	}
	return 0;
}

