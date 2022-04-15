#include <stdio.h>
int main()
{
    float radiusofball,volumeofball;
    float pi=3.14;
    scanf("%f",&radiusofball);
    volumeofball=(4.0/3.0)*(pi)*(radiusofball*radiusofball*radiusofball);
    printf("%f",volumeofball);
    return 0;
}