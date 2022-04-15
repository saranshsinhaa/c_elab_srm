#include <stdio.h>
int main()
{   
    int feet,inches;
    float cms;
    scanf("%d %d",&feet,&inches);
    cms=(feet*12*2.54)+(inches*2.54);
    printf("Your height in centimeters is : %0.2f",cms);
	return 0;
}