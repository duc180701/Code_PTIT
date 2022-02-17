#include<stdio.h>

int main() {
	int a;
	scanf("%d", &a);
	int nam = a / 365;
	int tuan = (a - nam * 365) / 7;
	int ngay = a - nam * 365 - tuan * 7;
	printf("%d %d %d", nam, tuan, ngay);	
	return 0;
}

