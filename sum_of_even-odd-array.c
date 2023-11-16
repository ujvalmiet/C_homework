#include <stdio.h>
void main()
{
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int a[n], i,sum=0,sum1=0;
    printf("Enter the array elements: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
        if(a[i]%2==0)
        sum=sum+a[i];
        else
        sum1=sum1+a[i];
    }
    printf("Sum of the even elements are: %d\n", sum);
    printf("Sum of the odd elements are: %d\n", sum1);
}