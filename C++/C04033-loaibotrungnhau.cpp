#include<stdio.h>

int main() {
	int n, i;
	int a[100];
	int used[100] = {0};
	scanf("%d", &n);
	for(i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	for(i = 0; i < n; i++) {
		if(!used[a[i]]) {
			printf("%d ", a[i]);
			used[a[i]] = 1;
		}
	}
	return 0;
}

