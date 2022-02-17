#include<stdio.h>
#include<math.h>

int snt(long x) {
	long i;
	if(x < 2) return 0;
	for(i = 2; i <= sqrt(x); i++) {
		if(x % i == 0) return 0;
	}
	return 1;
}

int main() {
	int n, i;
	scanf("%d", &n);
	if(n >= 2) printf("%d\n", 2);
	for(i = 3; i < n; i++) {
		if(snt(i) == 1) printf("%d\n", i);
	}
	return 0;
}


