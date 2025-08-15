#include <stdio.h>
int main(){
    
    int a[20], n, i, key;
    printf("Enter any %d integer values", n);
    for (i = 0; i < n; i++)
    scanf("%d", &a[i]);
    printf("Enter the element to be search: ");
    scanf("%d", &key);
    for (i = 0; i < n; i++)
    {
        if (key == a[i])
        {
            printf("Element is found at %d index", i);
            break;
        }
    }
    if (i == n)
    printf("Given element is not found in the list!!!");
    return 0;
}