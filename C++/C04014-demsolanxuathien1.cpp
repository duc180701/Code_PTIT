#include<stdio.h>

int main() {
	int n, i;
	int a[100];
	int dd[100] = {0};
	int used[100] = {0};
	scanf("%d", &n);
	for(i = 0; i < n; i++) {
		scanf("%d", &a[i]);
		dd[a[i]]++;
	}
	for(i = 0; i < n; i++) {
		if(used[a[i]] == 0) {
			if(dd[a[i]] > 0) {
				used[a[i]] = 1;
				printf("%d %d\n", a[i], dd[a[i]]);
			}
		}
	}
	return 0;
}

