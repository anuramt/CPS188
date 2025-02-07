#include <stdio.h>
#include <math.h>

double intensityRatio(double decibel1, double decibel2);

int main() {
	double db1, db2, temp, result;
	
	db1 = 20.5;
	db2 = 15.0;
	
	if (db1 > db2) {
	    temp = db1;
	    db1 = db2;
	    db2 = temp;
	}
	
	result = intensityRatio(db1, db2);
	
	printf("Sound at %lfdb is %lf times more intense than %lfdb.", db2, result, db1);
	
	return (0);
}

double intensityRatio(double decibel1, double decibel2) {
	double intensity1, intensity2;
	
	return pow(10, (decibel2 - decibel1) / 10);
}