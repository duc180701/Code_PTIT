#include<stdio.h>

int main() {
	int n, a[100], chan[100], le[100];
	int i, c = 0, l = 0;
	scanf("%d", &n);
	for(i = 0; i < n; i++) {
		scanf("%d", &a[i]);
		if(a[i] % 2 == 0) {
			chan[c] = a[i];
			c++;
		} else {
			le[l] = a[i];
			l++;
		}
	}
	for(i = 0; i < c; i++) {
		printf("%d ", chan[i]);
	}
	printf("\n");
	for(i = 0; i < l; i++) {
		printf("%d ", le[i]);
	}
	return 0;
}

