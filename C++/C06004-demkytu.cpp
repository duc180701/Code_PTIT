#include<stdio.h>
#include<string.h>

int main() {
	int i;
	char s[101];
	int chu = 0, so = 0, khac = 0;
	gets(s);
	for(i = 0; i < strlen(s); i++) {
		if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')) {
			chu++;
		} else if(s[i] >= '0' && s[i] <= '9'){
			so++;
		} else {
			khac++;
		}
	}
	printf("%d %d %d", chu, so, khac);
	return 0;
}

