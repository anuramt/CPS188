#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "coord.h"

int main(int argc, char* argv[]) {
	coord2D house1, house2;
	
	// printf("Program name: %s\n", argv[0]);
	// for (int i = 1; i < argc; i++) {
	// 	printf("%s\n", argv[i]);
	// }
	
	strcpy(house1.label, argv[1]);
	house1.x = atof(argv[2]);
	house1.y = atof(argv[3]);
	
	strcpy(house2.label, argv[4]);
	house2.x = atof(argv[5]);
	house2.y = atof(argv[6]);
	
	printf("%s's house is at (%lf, %lf).\n", house1.label, house1.x, house1.y);
	printf("%s's house is at (%lf, %lf).\n", house2.label, house2.x, house2.y);
	printf(
		"%s's house is %lf metres away from %s's house.", 
		house1.label, distance2D(house1, house2), house2.label
	);

	return (0);
}
