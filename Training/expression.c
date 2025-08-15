#include <stdio.h>
int main(){
    
    float a, b, c, d, e, f, g, result;


    printf("Enter value for a: ");
    scanf("%f",&a);
    printf("Enter value for b: ");
    scanf("%f",&b);
    printf("Enter value for c: ");
    scanf("%f",&c);
    printf("Enter value for d: ");
    scanf("%f",&d);
    printf("Enter value for e: ");
    scanf("%f",&e);
    printf("Enter value for f: ");
    scanf("%f",&f);
    printf("Enter value for g: ");
    scanf("%f",&g);

    result = ((a-b/c*d+e)*(f+g));

    printf("The solution of the given expression is: %f",result);

    return 0;

}