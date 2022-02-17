#include<stdio.h>

int main() {
	int sum;
	long a;
	int testCase;
	scanf("%d", &testCase);
	while(testCase--) {
		scanf("%ld", &a);
		sum = 0;
		while(a > 0) {
			sum += (a % 10);
			a /= 10;
		}
		if(sum % 10 == 0) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}

