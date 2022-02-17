#include<stdio.h>
#include<math.h>

int snt(long x) {
	long cnt = 0;
	long i;
	for(i = 1; i <= sqrt(x); i++) {
		if(x % i == 0) cnt++;
	}
	if(cnt > 1) return 0;
	else return 1;
}

int main() {
	long a;
	int testCase;
	scanf("%d", &testCase);
	while(testCase--) {
		scanf("%ld", &a);
		if(snt(a) == 1) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}

