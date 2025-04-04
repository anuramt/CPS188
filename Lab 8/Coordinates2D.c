#include <stdio.h>

#include "coord.h"

int main(void) {
	coord2D p1, p2, mid;
	
	inputCoord2D(&p1);
	printf("\n");
	inputCoord2D(&p2);
	printf("\n");
	
	printf("The first point: (%lf, %lf).\n", p1.x, p1.y);
	printf("The second point: (%lf, %lf).\n", p2.x, p2.y);
	
	mid = midpoint2D(p1, p2);
	printf("The midpoint: (%lf, %lf).\n", mid.x, mid.y);
	
	return (0);
}
