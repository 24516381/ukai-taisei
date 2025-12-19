/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));
    
    int total=20;
    int i,s,c;
    
    i=(rand()%total) + 1;
    s=(rand()%(total-i)) + 1;
    c=total-i-s;
    
    printf("intelligece:%d\n",i);
    printf("stamina:%d\n",s);
    printf("charisma:%d\n",c);
    printf("\n");
    
    if(i>=s&&i>=c)
    {
        printf("mage\n");
    }
    else if(s>=i&&s>=c)
    {
        printf("knight\n");
    }
    else
    {
        printf("thief\n");
    }
   

    return 0;
}