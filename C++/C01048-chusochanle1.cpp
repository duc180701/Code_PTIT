#include<stdio.h>

int main() {
	int x;
	int n;
	int le = 0, chan = 0;
	scanf("%d", &n);
	while(n > 0) {
		x = n % 10;
		if(x % 2 == 0) chan++;
		else le++;
		n /= 10;
	}
	printf("%d %d", le, chan);
	return 0;
}

