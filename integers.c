#include<stdio.h>
int main()
{
    int a;
    int b;
    float product;

    printf("\n enter a");
    scanf("%d",&a);
    printf("enter b");
    scanf("%d",&b);
    product=a*b;
    printf("product of a and b:%f",& product);
    return 0;
}
