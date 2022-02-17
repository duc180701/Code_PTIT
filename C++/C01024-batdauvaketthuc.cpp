#include<stdio.h>

int main() {
	long a, b;
	int testCase;
	scanf("%d", &testCase);
	while(testCase--) {
		scanf("%ld", &a);
		b = a; 
		while(b > 9) {
			b /= 10;
		}
		if(b == a % 10) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}

