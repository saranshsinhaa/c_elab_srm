#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char ch1,ch2[10],ch3[50];
    scanf("%c",&ch1);
    scanf("\n%c",&ch2);
    // scanf("\n%[^\n]%*c",&ch3);
    printf("%s\n%s",ch1,ch2);
    

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}