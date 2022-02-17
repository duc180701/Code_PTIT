#include<stdio.h>

int tinhgiaithua(int n) {
	int res = 1;
	for(int i = n; i >= 1; i--) {
		res *= i;
	}
	return res;
}

int main() {
	long long i, j;
	long long sum;
	long long a, b, tmp;
	scanf("%lld%lld", &a, &b);
	if(a > b) {
		tmp = a;
		a = b; 
		b = tmp;
	}
	for(i = a; i <= b; i++) {
		sum = 0;
		j = i;
		while(j > 0) {
			sum += tinhgiaithua(j % 10);
			j /= 10;
		}
		if(sum == i) printf("%lld ", i);
	}
	return 0;
}

