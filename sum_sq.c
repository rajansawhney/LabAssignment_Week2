#include <stdio.h>
#include <math.h>

#include "sum_sq.h"

void sum_sq() {
	int x, y;
	double x_sq, y_sq, sum;
	printf("Enter two integers:\n");
	scanf("%d%d", &x, &y);

	// sum = x*x + y*y;
	x_sq = pow(x, 2);
	y_sq = pow(y, 2);
	sum = x_sq + y_sq;
	printf("\nSum of squares = %f\n", sum);
}
