#include <stdio.h>
#include <math.h>

void main() {
	//завдання 1
	printf("Type in a,b and step h for function #1:\n");
	double a, b, h, temp;
	double y;
	scanf_s("%lf %lf %lf", &a , &b, &h);
	if (a > b) {
		temp = a;
		a = b;
		b = temp;
	}
	printf("[%.2lf, %.2lf], h = %.2lf\n", a , b, h);

	for (double x = a; x <= b; x = x + h) {
		if (x <= 3) {
			y = log10l(powl(x, 3.0));
			printf("x = %.3lf, y = %.3lf.\n",x,y);
		}
		else if (3 < x && x < 4) {
			y = 1 / (fabs(sinl(x)));
			printf("x = %.3lf, y = %.3lf.\n", x, y);
		}
		else if (x >= 4) {
			y = 1 / (cosl(x));
			printf("x = %.3lf, y = %.3lf.\n", x, y);
		}
	}

	//завдання 2  
	printf("Type in a,b and step h for function #2:\n");
	double a1, b1, h1, temp1;
	scanf_s("%lf %lf %lf", &a1, &b1, &h1);
	if (a1 > b1) {
		temp1 = a1;
		a1 = b1;
		b1 = temp1;
	}
	printf("[%.2lf, %.2lf], h = %.2lf\n", a1, b1, h1);
	double sum = 0, k = 1;
	double d = 0.0001;
	for (double x1 = a1; x1 <= b1; x1 = x1 + h1) {
		sum = sum + k * pow(x1, k);
		if (k * pow(x1, k) < d) {
			printf("Result is smaller than absolute error.");
			break;
		}
		printf("k = %.3lf, x = %.3lf, SUM = %.3lf.\n", k, x1, sum);
		k++;
	}
}