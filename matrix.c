#include<stdio.h>
int main()
{
    int m,n,p,q,i,j,k;

    printf("Enter the rows and cols of first matrix: ");
    scanf("%d %d", &m, &n);

    printf("Enter the rows and cols of second matrix: ");
    scanf("%d %d", &p, &q);

    if (n != p)
    {
        printf("The matrix multiplication is not possible ");
        return 0;

    }

    int a[m][n], b[p][q], c[m][q];

    printf("Enter the values of first matrix: \n");
    for ( i = 0; i < m; i++)
    {
        for ( j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
        
    }
    printf("Enter the values of second matrix: \n");
    for ( i = 0; i < p; i++)
    {
        for ( j = 0; j < q; j++)
        {
            scanf("%d", &b[i][j]);
        }
        
    }

    printf("The add of the two matrices is : \n");
    for ( i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            c[i][j] = a[i][j] + b[i][j];

            printf("%d ", c[i][j]);
        }
        printf("\n");
        
    }

    printf("The multiplication of the two matrices is: \n");
    for ( i = 0; i < m; i++)
    {
        for ( j = 0; j < q; j++)
        {   
            c[i][j]=0;
            for (k = 0; k < n; k++)
            {
                c[i][j] += a[i][k]*b[k][j];
            }

            printf("%d ", c[i][j]);
            
        }
        printf("\n");
        
    }
    
    

    
    

    return 0;
}