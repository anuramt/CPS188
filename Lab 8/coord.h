#include <stdio.h>
#include <math.h>

#define SIZE 100

typedef struct coordinate2D {
	double x, y;
	char label [SIZE];
} coord2D;

typedef struct coordinate3D {
	double x, y, z;
} coord3D;

void inputCoord2D(coord2D* coordPtr) {
	double xIn, yIn;
	
	printf("Enter coordinates (x, y): ");
	scanf(" %lf, %lf", &xIn, &yIn);
	
	(*coordPtr).x = xIn;
	coordPtr->y = yIn;
}

coord3D inputCoord3D() {
	double xIn, yIn, zIn;
	coord3D coord;
	
	printf("Enter coordinates (x, y, z): ");
	scanf(" %lf, %lf, %lf", &xIn, &yIn, &zIn);
	
	coord.x = xIn;
	coord.y = yIn;
	coord.z = zIn;
	
	return coord;
}

coord2D midpoint2D (coord2D one, coord2D two) {
	coord2D midpoint;
	
	midpoint.x = (one.x + two.x) / 2;
	midpoint.y = (one.y + two.y) / 2;
	
	return midpoint;
}

double distance2D (coord2D one, coord2D two) {
	return sqrt(pow(two.x - one.x, 2) + pow(two.y - one.y, 2));
}

double distance3D (coord3D one, coord3D two) {
	return sqrt(pow(two.x - one.x, 2) + pow(two.y - one.y, 2) + pow(two.z - one.z, 2));
}
