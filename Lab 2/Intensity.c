#include <stdio.h>
#include <math.h>

double intensity_ratio();

int main()
{
    double result;
    
    result = intensity_ratio();

    printf("Sound at 50dB is %lf times more intense than sound at 10dB.", result);

    return 0;
}

double intensity_ratio() {
    double intensity1, intensity2;
    
    intensity1 = pow(10, 10/10) * pow(10, -12);
    intensity2 = pow(10, 50/10) * pow(10, -12);
    
    return intensity2 / intensity1;
}