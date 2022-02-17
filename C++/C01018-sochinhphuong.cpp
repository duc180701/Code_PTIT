#include<stdio.h>
#include<math.h>

int check(long a) {
	int i;
	for(i = 1; i <= sqrt(a); i++) {
		if(i * i == a) return 1;
	}
	return 0;
}

int main() {
	long a;
	int testCase;
	scanf("%d", &testCase);
	while(testCase--) {
		scanf("%ld", &a);
		if(check(a) == 1) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}

