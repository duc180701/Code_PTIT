#include<stdio.h>

int main() {
	int a;
	scanf("%d", &a);
	int cnt = 0;
	while(a > 0) {
		cnt++;
		a /= 10;
	}
	printf("%d", cnt);
	return 0;
}
