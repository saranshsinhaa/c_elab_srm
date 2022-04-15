#include <stdio.h>
int main()
{
    int cp,sp,amt;
    scanf("%d\n%d",&cp,&sp);
    if (cp>sp){printf("Loss:%d",cp-sp);}
    else if (cp<sp){printf("Profit:%d",sp-cp);}
    else if (cp=sp){printf("No Profit No Loss");}

	return 0;
}