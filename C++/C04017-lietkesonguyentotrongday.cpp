#include<stdio.h>
#include<math.h>

int check(int a) {
	if(a < 2) return 0;
	int cnt = 0;
	for(int i = 1; i <= sqrt(a); i++) {
		if(a % i == 0) cnt++;
	}
	if(cnt > 1) return 0;
	else return 1;
}

int main() {
	int n;
	int a[101];
	int dem = 0;
	scanf("%d", &n);
	for(int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	for(int i = 0; i < n; i++) {
		if(check(a[i]) == 1) {
			dem++;
		}
	}
	printf("%d ", dem);
	for(int i = 0; i < n; i++) {
		if(check(a[i]) == 1) {
			printf("%d ", a[i]);
		}
	}
	return 0;
}

