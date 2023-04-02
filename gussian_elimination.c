#include <stdio.h>
#include <math.h>

int main()
{
    float a[3][4], x[3];
    int i, j, k, n = 3;
    printf("enter coeffcients first cofecits of x in all 3 than y ,z and finally enter constants\n");
    printf("it makes a[3][4]\n");
    printf("Enter the coefficients of the equations:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j <= n; j++)
        {
            scanf("%f", &a[i][j]);
        }
    }

    for (k = 0; k < n - 1; k++)
    {
        for (i = k + 1; i < n; i++)
        {
            float factor = a[i][k] / a[k][k];
            for (j = k; j <= n; j++)
            {
                a[i][j] = a[i][j] - factor * a[k][j];
            }
        }
    }

    x[n - 1] = a[n - 1][n] / a[n - 1][n - 1];
    for (i = n - 2; i >= 0; i--)
    {
        float sum = a[i][n];
        for (j = i + 1; j < n; j++)
        {
            sum = sum - a[i][j] * x[j];
        }
        x[i] = sum / a[i][i];
    }

    printf("The solutions are:\n");
    for (i = 0; i < n; i++)
    {
        printf("x[%d] = %f\n", i, x[i]);
    }

    return 0;
}
