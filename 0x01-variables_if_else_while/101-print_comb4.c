#include <stdio.h>
/**
* main - Print numbers from 00 to 99
*
* Return: Always 0 (Success)
*/
int main()
{
    int i, j, k;
    int arr[3];
    printf("Enter the first number : ");
    scanf("%d", &arr[0]);
    printf("Enter the second number : ");
    scanf("%d", &arr[1]);
    printf("Enter the third number : ");
    scanf("%d", &arr[2]);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 3; k++)
            {
                if (i != j && j != k && k != i)
                {

                    printf("[%d %d %d]\n", arr[i], arr[j], arr[k]);
                }
            }
        }
    }
}
