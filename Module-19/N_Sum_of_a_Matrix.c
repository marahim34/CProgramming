#include <stdio.h>
#include <string.h>

int main()
{
    int row, column;
    scanf("%d %d", &row, &column);

    int arr_1[row][column], arr_2[row][column], arr_3[row][column];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            scanf("%d", &arr_1[i][j]);
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            scanf("%d", &arr_2[i][j]);
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            arr_3[i][j] = arr_1[i][j] + arr_2[i][j];
            printf("%d ", arr_3[i][j]);
        }
        printf("\n");
    }

    return 0;
}