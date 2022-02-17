#include<stdio.h>
#include<math.h>

int main() {
	float a, b, c;
	float delta, x1, x2;
	scanf("%f%f%f", &a, &b, &c);
	if(a == 0) {
		if(b == 0) printf("NO");
		else {
			x1 = -c / b;
			printf("%.2f", x1);
		}
	} else if(b == 0) {
		if(c > 0) printf("NO");
		else if(c == 0) {
			x1 = sqrt(a);
			x2 = -sqrt(a);
		} else {
			x1 = sqrt(c / a);
			x2 = -sqrt(c / a) ;
		}
	} else {
		delta = b * b - 4 * a * c;
		if(delta < 0) printf("NO");
		else if(delta == 0) {
			x1 = -b / (2 * a);
			printf("%.2f", x1);
		} else {
			x1 = (-b + sqrt(delta)) / (2 * a);
			x2 = (-b - sqrt(delta)) / (2 * a);
			printf("%.2f %.2f", x1, x2);
		}
	}	
	return 0;
}

