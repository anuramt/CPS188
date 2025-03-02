#include <stdio.h>
#include <math.h>

#define PI 3.14

void calculateCylinder(double r, double h, double *v, double *sA);

int main() {
	double radius, height, volume, surfaceArea;
	
	printf("Enter the radius of the cylinder: ");
	scanf(" %lf", &radius);
	
	printf("Enter the height of the cylinder: ");
	scanf(" %lf", &height);
	
	// Intialize volume and surfaceArea to sample values to showcase the change after calling calculateCylinder
	volume = 3.14;
	surfaceArea = 12.57;
	printf("BEFORE - Volume: %lf, Surface Area: %lf\n", volume, surfaceArea);
	
	calculateCylinder(radius, height, &volume, &surfaceArea);
	
	printf("AFTER - Volume: %lf, Surface Area: %lf", volume, surfaceArea);
	
	return(0);
}

void calculateCylinder(double r, double h, double *v, double *sA) {
	*v = PI * pow(r, 2) * h;
	*sA = (2 * PI * r * h) + (2 * PI * pow(r, 2));
}
