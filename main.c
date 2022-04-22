#include <stdio.h>
int main()
{
    int a,b,c,d;
    float e,f,g,h;
    scanf("%d\n%d\n%d\n%d",&a,&b,&c,&d);
    printf("Addition %d",(a+b)+(c+d));
    printf("\nSubstraction %d",(a-b)-(c-d));
    printf("\nMultiplication %d\n",(a*b)*(c*d));
    scanf("Enter Numbers for Division \n%f\n%f\n%f\n%f",&e,&f,&g,&h);
    printf("\nDivision%0.2f",(e/f)/(g/h));
    return 0;
}