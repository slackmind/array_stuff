#include <stdio.h>

int main()
{
    int i;
    int n1;
    int n2;
    int n3;
    int index = 0;

    printf("\nEnter the number of elements in the first array: \n");
    scanf("%d", &n1);

    int array1[n1];
    printf("\nEnter the elements of the first array: \n");
  
    for ( i = 0; i<n1; i++ )
    {
        printf("Array_1[%d] = ", i);
        scanf("%d", &array1[i]);
    }
    printf("\nEnter the number of elements in the second array: \n");
    scanf("%d", &n2);
    
    int array2[n2];
    printf("\nEnter the elements of the second array: \n");
  
    for ( i = 0; i<n2; i++ )
    {
        printf("Array_2[%d] = ", i);
        scanf("%d", &array2[i]);
    }
    
    n3 = n1+n2;
    int array3[n3];

    for ( i = 0; i<n1; i++)
    {
        array3[index] = array1[i];
        index++;
    }
    for ( i = 0; i<n2; i++)
    {
        array3[index] = array2[i];
        index++;
    }

    printf("\nThe merged array is:\n");
    printf("*******************");

    for ( i = 0; i<n3; i++)
    {
        printf("\n Array_3[%d] = %d", i, array3[i]);
    }

    getchar();
    return 0;
}