#include <stdio.h>
int main()
{
    int search, first, last, middle;
    int i, len;
    system("cls");
    printf("Enter the arrey length:");
    scanf("%d", &len);
    int arrey[len];

    printf("enter  %d arrey elements:", len);
    for (i = 0; i < len; i++)
    {
        printf(" arr[%d] = ", i);
        scanf("%d", &arrey[i]);
    }

    printf("Enter value to find\n");
    scanf("%d", &search);
    first = 0;
    last = len - 1;
    middle = (first + last) / 2;

    while (first <= last)
    {
        if (arrey[middle] < search)
            first = middle + 1;
        else if (arrey[middle] == search)
        {
            printf("%d found at location %d.\n", search, middle + 1);
            break;
        }
        else
            last = middle - 1;

        middle = (first + last) / 2;
    }
    if (first > last)
        printf("Not found! %d isn't present in the list.\n", search);

    return 0;
}