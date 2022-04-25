SARANSH SINHA CLA 1 PPS


#include <stdio.h>
int main()
{
    int a,b,c,d,i=0,j=0,k=0,l=0,m=0,n=0;
    
// ---------ARITHMETIC Operators----------------
    scanf("%d\n%d\n%d\n%d",&a,&b,&c,&d);
    printf("Addition %d",(a+b)+(c+d));
    printf("\nSubstraction %d",(a-b)-(c-d));
    printf("\nMultiplication %d\n",(a*b)*(c*d));
    printf("\nDivision %d",b/a);
    printf("\nModulus %d",a%b);
// --------ASSIGNMENT Operators----------------
    i=a;
    j+=b;
    k-=c;
    l/=d;
    m*=a;
    n%=b;
    printf("\n%d %d %d %d %d %d",i,j,k,l,m,n);
// ---------Increment/Decrement Operators-------
    a=++b;
    c=--d;
    i=j++;
    k=j--;
    printf("\n%d %d %d %d\n",b,d,i,j);
// ---------Relational Operators---------------
    if (a==b)
    {
        printf("equal");
    }
    else if (a>b)
    {
        printf("Greater");
    }
    else if (a<b)
    {
        printf("Lesser");
    }
    else if (a!=b)
    {
        printf("Not equal");
    }
    else if (a>=b)
    {
        printf("Greater than or Equal to");
    }
    else if (a<=b)
    {
        printf("Less than equal to");
    }
//---------Logical Operators--------------------
    if (a>0 && a%2==0)
    {
        printf("Positive and even");
    }
    else if (a>0 || a%2==0)
    {
        printf("Positive or Even");
    }
//---------Bitwise Operators--------------------
    printf("\nBitwise AND %d",a&b);
    printf("\nBitwise OR %d",a|b);
    printf("\nBitwise XOR %d",a^b);
    printf("\nBitwise complement %d",~b);
    for (int i=0;i<=1,++i;)
    {
        printf("\nBitwise Right Shift %d",a>>i);
    }
    for (int i=0;i<=1,++i;)
    {
        printf("\nBitwise Left Shift %d",a<<i);
    }
    printf("Size of a %d",sizeof(a));

    return 0;
}
