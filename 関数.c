/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <math.h>

int powint(int a,int b,int c)
{
    int D;
    double x1,x2;
    D=b*b - 4*a*c;
    if(D>0)
    {
        x1=(-b+sqrt(D))/(2*a);
        x2=(-b-sqrt(D))/(2*a);
        printf("異なる二つの実数解\n");
        printf("x1=%.2f,x2=%.2f\n",x1,x2);
    }
    else if(D==0)
    {
        x1=-b/(2*a);
        printf("重解\n");
        printf("x=%2.f\n",x1);
    }
    else
    {
        x1=(-b+sqrt(D))/(2*a);
        x2=(-b-sqrt(D))/(2*a);
        printf("実数解はない");
    }
}
int main()
{
    int a,b,c;
    printf("整数aは？(0以外)");
    scanf("%d",&a);
    while(a==0);
    
    printf("整数bは？");
    scanf("%d",&b);
    
    printf("整数cは？");
    scanf("%d",&c);
    
    powint(a,b,c);
}