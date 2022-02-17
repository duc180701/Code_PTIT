#include<stdio.h>
#include<string.h>

int main() {
	int i;
	char s[101];
	gets(s);
	for(i = 0; i < strlen(s); i++) {
		if(s[i] >= 'a' && s[i] <= 'z') {
			s[i] -= 32;
		}
	}
	printf("%s", s);
	return 0;
}

