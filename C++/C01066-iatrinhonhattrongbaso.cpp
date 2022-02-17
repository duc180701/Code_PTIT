#include<stdio.h>

int main() {
	long long a, b, c, min;
	scanf("%lld%lld%lld", &a, &b, &c);
	min = a;
	if(min > b) min = b;
	if(min > c) min = c;
	printf("%lld", min);
	return 0;
}

