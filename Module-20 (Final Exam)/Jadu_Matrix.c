#include <stdio.h>

int main()
{
    int row, column;
    scanf("%d %d", &row, &column);

    if (row != column)
    {
        printf("NO\n");
        return 0;
    }

    int arr[row][column];

    int flag = 1;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            scanf("%d", &arr[i][j]);
            if ((i == j || i + j == row - 1) && arr[i][j] != 1)
            {
                flag = 0;
            }
            else if (i != j && i + j != row - 1 && arr[i][j] != 0)
            {
                flag = 0;
            }
        }
    }

    if (flag)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}
