#include <stdio.h>

int main()
{
    int i, len;

    printf("Enter the arrey length:");
    scanf("%d", &len);
    int arrey[len];

    printf("enter  %d arrey elements:", len);
    for (i = 0; i < len; i++)
    {
        printf(" arr[%d] = ", i);
        scanf("%d", &arrey[i]);
    }

    int j, min, temp;

    for (i = 0; i < len - 1; i++)
    {
        min = i;
        for (j = i + 1; j < len; j++)
        {
            if (arrey[j] < arrey[min])
                min = j;
        }

        temp = arrey[min];
        arrey[min] = arrey[i];
        arrey[i] = temp;
    }
    printf("sorted arrey");
    for (i = 0; i < len; i++)
    {
        printf("%d\n\n", arrey[i]);
    }

    return 0;
}