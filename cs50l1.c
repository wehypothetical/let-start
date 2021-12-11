#include<math.h>
#include<cs50.h>
#include<stdio.h>
int main (void)
{
    int a;int b;int c;
    int i=get_int("enter first side of triangle\n");
    int j=get_int("enter second side of triangle\n");
    int k=get_int("enter third side of triangle\n");
    float m=(i+j+k)/2;
    a=m-i;b=m-j;c=m-k;
    float n=(m*a*b*c);
    float area=sqrt(n);
    printf("Area of square:%f\n",area);

}