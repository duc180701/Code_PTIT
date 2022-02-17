#include<stdio.h>
#include<math.h>

int main() {
	int a;
	scanf("%d", &a);
	int cnt = 0;
	int i = a;
	while(i > 10) {
		cnt++;
		i /= 10;
	}
	printf("%d %d", i, a % 10);
	return 0;
}
