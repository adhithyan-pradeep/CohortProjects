#include <stdio.h>
int main()
{
    char str[100], *p, *q, temp;

    printf("Enter a string: ");
    scanf("%s", str); // No spaces handled

    // Set pointers
    p = str;
    q = str;

    while (*q) q++;
    q--;

    while (p < q) {
        temp = *p;
        *p = *q;
        *q = temp;

        p++;
        q--;
    }

    printf("Reversed string: %s\n", str);

    return 0;
}