#include<stdio.h>

int main() {
	char s[10];
	int a, b, c, d;
	gets(s);
	a = s[0] - '0';
	b = s[4] - '0';
	c = s[8] - '0';
	d = a + b;
	if(c == d) printf("YES");
	else printf("NO");
	return 0;
}

