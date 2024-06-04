#include <stdio.h>

int main()
{
    int row, column;
    scanf("%d %d", &row, &column);

    int arr[row][column];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    int last_row = row - 1;
    for (int i = 0; i < column; i++)
    {
        printf("%d ", arr[last_row][i]);
    }
    printf("\n");

    int last_column = column - 1;
    for (int i = 0; i < row; i++)
    {
        printf("%d ", arr[i][last_column]);
    }
    return 0;
}