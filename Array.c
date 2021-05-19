#include <stdio.h>


int main()
{
    int a[100],i,n,sum=0;

    printf("Size of the array:");
    scanf("%d",&n);

    printf("Elements in array:");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }


    for(i=0; i<n; i++)
    {

        sum+=a[i];
    }
     printf("sum of array is: %d",sum);

    return 0;
}
