#include<stdio.h>

int main()
{
    int i;
    int number;
    int size;
    int found = 0;


    printf("\nEnter the number of elements in the array: ");
    scanf("%d", &size);
    int array[size];

    printf("\nEnter the elements:\n");

    for ( i = 0; i<size; i++ )
    {
        printf("\n array[%d] = ", i);
        scanf("%d", &array[i]);   
    }

    printf("\nEnter the number that must be found: ");
    scanf("%d", &number);

    for ( i = 0; i<size; i++)
    {
        if ( array[i] == number )
        {
            found = 1;
            printf("\n%d is found in the array at position [%d]", number, i);
            break;
        
        }
    }

    if ( found == 0 )
    {
        printf("\n %d is not a member of the array.", number);
    }

    getchar();
    return 0;

}