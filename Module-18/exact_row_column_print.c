#include <stdio.h>

int main()
{
    int row, column;
    scanf("%d %d", &row, &column);

    int a[row][column];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // To print the output of given inputs
    // for (int i = 0; i < row; i++)
    // {
    //     for (int j = 0; j < column; j++)
    //     {
    //         printf("%d ", a[i][j]);
    //     }
    //     printf("\n");
    // }

    // // To find the exact row

    // // int e = 2; // since I am going to find out indexes of row 2
    // int e;
    // scanf("%d", &e);
    // for (int i = 0; i < column; i++)
    // {
    //     printf("%d ", a[e][i]);
    // }

    // To find exact column
    int e;
    scanf("%d", &e);
    for (int i = 0; i < row; i++)
    {
        printf("%d\n", a[i][e]);
    }

    return 0;
}