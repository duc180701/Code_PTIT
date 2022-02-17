#include<stdio.h>

int main() {
	char c;
	int testCase;
	scanf("%d", &testCase);
	while(testCase--) {
		getchar();
		scanf("%c", &c);
		if(c <= 'z' && c >= 'a') c -= 32;
		else c += 32;
		printf("%c\n", c);
	}
	return 0;
	
}

