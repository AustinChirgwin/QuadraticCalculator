#pragma warning(disable:4996)    
#include <stdio.h> 
#include <math.h>

//Assignment 4
//Austin Chirgwin
//ENGR 19700
//Wendesday, September 25, 2019
//This program computes real roots of a quadratic equation in the form ax^2 + bx + c based on user input of a, b, and c.

int main(void)
{
	double a;
	double b;
	double c;
	double realRoot1;
	double realRoot2;
	double discriminant;

	printf("This program will compute real roots based on user inputed variables.");

	printf("\n\nEnter constant a: ");
	scanf("%lf", &a);

	printf("\n\nEnter constant b: ");
	scanf("%lf", &b);

	printf("\n\nEnter constant c: ");
	scanf("%lf", &c);

	discriminant = pow(b, 2);
	discriminant = discriminant - (4 * a * c);

	if ((a == 0) && (b == 0)) {
		printf("\n\nThere is no solution");
	}

	else if ((a == 0) && (b != 0)) {
		realRoot1 = ((-c) / (b));
		printf("\n\nThe solution is: ");
		printf("%.3lf\n", realRoot1);
	}
	else if (discriminant < 0) {
		printf("\n\nThere are no real roots");
	}

	else //discriminant is positive
	{
		realRoot1 = -b;
		discriminant = sqrt(discriminant);
		realRoot1 = (realRoot1 + discriminant);
		realRoot1 = (realRoot1) / (2 * a);
		
		realRoot2 = -b;
		realRoot2 = (realRoot2 - discriminant);
		realRoot2 = (realRoot2) / (2 * a);

		printf("\n\nThe two roots are: ");
		printf("%.3lf", realRoot1);
		printf(" , %.3lf\n", realRoot2);
	}
	   	  
	return 0;
}