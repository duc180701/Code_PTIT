#include<stdio.h>

long gcd(long a, long b) {
	if(a == 0 || b == 0) {
		return a + b;
	}
	while(a != b) {
		if(a > b) a -= b;
		else if(a < b) b -= a;
	}
	return a;
}

long lcm(long a, long b) {
	return (a / gcd(a, b)) * b;
}

int main() {
	long a, b;
	scanf("%ld%ld", &a, &b);
	printf("%ld\n%ld", gcd(a, b), lcm(a, b));
	return 0;
}

