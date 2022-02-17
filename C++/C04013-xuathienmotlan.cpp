#include<stdio.h>

int main() {
	int n, i, cnt = 0;
	int a[100];
	int dd[100] = {0};
	scanf("%d", &n);
	for(i = 0; i < n; i++) {
		scanf("%d", &a[i]);
		dd[a[i]]++;
	}
	for(i = 0; i < n; i++) {
		if(dd[a[i]] == 1) cnt++;
	}
	printf("%d\n", cnt);
	for(i = 0; i < n; i++) {
		if(dd[a[i]] == 1) printf("%d ", a[i]);
	}
	return 0;
}
