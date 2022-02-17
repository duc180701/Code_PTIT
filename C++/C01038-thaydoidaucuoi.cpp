#include<stdio.h>
#include<math.h>

int main() {
	int n;
	scanf("%d", &n);
	int a = n;
	int b = n;
	int cnt = 0;
	while(a > 0) {
		cnt++;
		a /= 10;
	}
	while(b > 10) b /= 10;
	if(n % 10 == 0) {
		n = n - b * pow(10, cnt - 1) + b;
	} else {
		n = n - b * pow(10, cnt - 1) + (n % 10) * pow(10, cnt - 1) - (n % 10) + b; 
	}
	printf("%d", n);
	return 0;
}
