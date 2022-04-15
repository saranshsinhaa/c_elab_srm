#include <stdio.h>
int main()
{
    int n,r,i;
    scanf("%d %d",&n,&r);
    if (n>=10) 
    {
        i=r;
    }
    else
    {
        i=r+(100*(10-n));
    }
    printf("%d",i);
    return 0;
}