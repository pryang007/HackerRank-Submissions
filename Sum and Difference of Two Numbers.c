#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int a,b,sum,diff;
    float c,d,sumf,difff;
    scanf("%d%d",&a,&b);
    scanf("%f%f",&c,&d);
    sum=a+b;
    diff=a-b;
    sumf=c+d;
    difff=c-d;
    printf("%d %d",sum,diff);
    printf("\n%.1f %.1f",sumf,difff);
    
    
    
    return 0;
}
