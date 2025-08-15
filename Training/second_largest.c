#include <stdio.h>
int main(){
    int i, n, largest, sec_largest;
    printf("Enter the no. of elements: \n");
    scanf("%d",&n);
    if (n < 2)
    {
        printf("Error:Minimum 2 elements required\n");
        return 1;
    }
    int arr[n];
    printf("Enter %d elements: \n", n);
    for (i=0;i,n;i++)
    {
        scanf("%d",&arr[i]);
    }
    if (arr[0] > arr[1])
    {
        largest = arr[0];
        sec_largest = arr[1];
    }
    else
    {
        largest = arr[1];
        sec_largest = arr[0];
    }
    for (i=2;i<n;i++)
    if (arr[i] > largest)
    {
        sec_largest = largest;
        largest = arr[i];
    }
    else if (arr[i] > sec_largest)
    {
        sec_largest = arr[i];
    }
    if (largest == sec_largest)
    {
        printf("No Distinct Second Largest Number \n");
    }
    else
    {
        printf("Second Largest Number = %d",sec_largest);
    }
    return 0;
}