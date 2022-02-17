#include<stdio.h>

int main() {
	int suma = 0, sumb = 0;
	long long a, b, c, d;
	scanf("%lld%lld", &a, &b);
	c = a; d = b;
	while(a > 0) {
		suma += a % 10;
		a /= 10;
	}
	while(b > 0) {
		sumb += b % 10;
		b /= 10;
	}
	if(sumb >= suma) printf("%d %d", c, d);
	else printf("%d %d", d, c);
	return 0;
}

