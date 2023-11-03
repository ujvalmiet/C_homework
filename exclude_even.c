#include <stdio.h>
int main()
{
    int i,c=0;
    for(i=1;i<=20;i++)
    {
        c=i%2;
        if(c==1)
        {
            printf("%d" ,i);
        }    
        else
        {
            printf(",");
        }
    }
    return 0;
}