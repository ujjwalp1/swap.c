#include<stdio.h>
#include<math.h>
int main ()
{
    int a,b;
    printf("enter the number a and b\n");
    scanf("%d,%d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("swap no are %d,%d,\n",a,b);
    return 0;

}