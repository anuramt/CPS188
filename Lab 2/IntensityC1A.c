#include <stdio.h>
#include <math.h>

double intensityRatio(double decibel1, double decibel2);

int main() {
	double db1, db2, result;
	
	db1 = 12.5;
	db2 = 45.0;
	
	result = intensityRatio(db1, db2);
	
	printf("Sound at %lfdb is %lf times more intense than %lfdb.", db2, result, db1);
	
	return (0);
}

double intensityRatio(double decibel1, double decibel2) {
	double intensity1, intensity2;
	
	intensity1 = pow(10, decibel1/10) * (pow(10, -12));
	intensity2 = pow(10, decibel2/10) * (pow(10, -12));
	
	return intensity2 / intensity1;
}