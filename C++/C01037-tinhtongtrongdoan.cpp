#include<stdio.h>

int main() {
	long long a, b;	
	scanf("%lld %lld", &a, &b);
	if(a > b) {
		long long tmp = a;
		a = b; 
		b = tmp;
	}
	long long res = 0;
	for(long long i = a; i <= b; i++) {
		res += i;
	}
	printf("%lld", res);
	return 0;
}

