#include <stdio.h>
#include <stdlib.h>
void read(int a[][5], int, int);
void disp(int a[][10], int, int);
void trans(int a[][5], int, int);
void add(int a[][5], int b[][5], int, int);
void mul(int a[][5], int b[][5], int, int, int);
int c[10][10];
int d[10][10];
int t[10][10];

int main()
{
    int a[5][5], b[5][5], i, j, k, m, n, p, q, ch, chn;

    while(1)
    {
        printf("MENU\n1.Addition\n2.Multiplication\n3.Transpose\n4.Exit");
        scanf("%d", &ch);

        switch(ch)
        {
            case 1: printf("Enter the order of the first matrix");
            scanf("%d%d", &m, &n);
            printf("Enter the order of the second matrix");
            scanf("%d%d", &p, &q);
            if(m == p && n == q)
            {
                read(a, m, n);
                read(b, p, q);
                printf("The sum of two matrices are\n");
                add(a, b, m, n);
                disp(d, m, n);
            }
            else
            printf("Addition is not possible");
            break;

            case 2: printf("Enter the order of the first matrix");
            scanf("%d%d", &m, &n);
            printf("Enter the order of the second matrix");
            scanf("%d%d", &p, &q);
            if(n == p)
            {
                read(a, m, n);
                read(b, p, q);
                mul(a, b, m, q, p);
                printf("The product of two matrices is\n");
                disp(c, m, q);
            }
            else
            printf("Multiplication is not possible");
            break;

            case 3: printf("Enter the order of the matrix");
            scanf("%d%d", &m, &n);
            read(a, m, n);
            trans(a, m, n);
            printf("The transpose matrix is\n");
            disp(t, m, n);
            break;

            case 4: exit(0)
            
            default: printf("Invalid choice");
        }

    }
}
void read(int a[][5], int m, int n)
{
    int i, j;
    printf("Enter the elements of the matrix");
    for(i = 0; i < m; i++)
    for(j = 0; j < n; j++)
    {
        scanf("%d", &a[i][j]);
    }
}
void mul(int a[][5], int b[][5], int m, int q, int p)
{
    int i, j, k;
    for(i = 0; i < m; i++)
    for(j = 0; j < n; j++)
    {
        c[i][j] = 0;
        for(k = 0; k < p; k++)
        {
            c[i][j] = c[i][j] + a[i][k] * b[k][j];
        }
    }
}