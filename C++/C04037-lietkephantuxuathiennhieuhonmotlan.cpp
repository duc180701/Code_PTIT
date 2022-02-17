#include<stdio.h>

int main() {
	int n, i, cnt = 0;
	int a[1001];
	int dd[1001] = {0};
	int used[1001] = {0};
	int use[1001] = {0};
	scanf("%d", &n);
	for(i = 0; i < n; i++) {
		scanf("%d", &a[i]);
		dd[a[i]]++;
	}
	for(i = 0; i < n; i++) {
		if(use[a[i]] == 0) {
			if(dd[a[i]] > 1) {
				cnt++;
				use[a[i]] = 1;
			}
		}
	}
	printf("%d\n", cnt);
	for(i = 0; i < n; i++) {
		if(used[a[i]] == 0) {
			if(dd[a[i]] > 1) printf("%d ", a[i]);
			used[a[i]] = 1;
		}
	}
	return 0;
}
