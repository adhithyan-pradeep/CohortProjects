#include <stdio.h>
#include <math.h>
float area(float);
float area(float a)
{
    float result = M_PI * a * a;
    return result;
}
int main()
{
    float radius = 10.5;
    float a = area(radius);
    printf("%f", a);
    return 0;
}