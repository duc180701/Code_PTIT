#include<stdio.h>
#include<string.h>

int main() {
	int i, j;
	char a[100];
	char s1[100];
	char s2[100];
	gets(s1);
	gets(s2);
	for(i = 0; i < strlen(s1); i++) {
		if(s1[i] == s2[0] && s1[i + strlen(s2) - 1] == s2[strlen(s2) - 1]) {
			for(j = i; j < strlen(s1); j++) {
				s1[j] = s1[j + strlen(s2)];
			}
			s1[j + strlen(s2)] = '\0';
		}
	}
	printf("%s", s1);
	return 0;
}

