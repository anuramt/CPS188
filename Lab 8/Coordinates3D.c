#include <stdio.h>

#include "coord.h"

int main(void) {
	coord3D p1, p2;
	double distance;
	
	p1 = inputCoord3D();
	printf("\n");
	p2 = inputCoord3D();
	printf("\n");
	
	
	printf("The first point: (%lf, %lf, %lf).\n", p1.x, p1.y, p1.z);
	printf("The second point: (%lf, %lf, %lf).\n", p2.x, p2.y, p2.z);
	
	
	distance = distance3D(p1, p2);
	printf("The distance: %lf.\n", distance);
	
	return (0);
}
