#include<stdio.h>
#include<math.h>

int fb(int a) {
	int f0 = 0;
	int f1  = 1;
	int fn = 1;
	if(a == 0 || a == 1 || a == 2 || a == 3) return 1;
	else {
		for(int i = 2; i < a; i++) {
			f0 = f1;
			f1 = fn;
			fn = f0 + f1;
			if(fn == a) return 1;
		}
	}
	return 0;
}

int snt(int b) {
	if(b < 2) return 0;
	int cnt = 0;
	for(int i = 1; i <= sqrt(b); i++) {
		if(b % i == 0) cnt++;
	}
	if(cnt > 1) return 0;
	else return 1;
}

int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	if(a > b) {
		int tmp = a;
		a = b;
		b = tmp;
	}
	for(int i = a; i <= b; i++) {
		if(snt(i) == 1) {
			int j = i;
			int x = 0;
			while(j > 0) {
				x += j % 10;
				j /= 10;
			}
			if(fb(x) == 1) {
				printf("%d ", i);
			}
		}
	}
	return 0;
}

