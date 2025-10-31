/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int k, l;
    
    printf("Aさん身長は？");
    printf("Bさんの身長は？");
    scanf("%d %d", &k, &l);
    if (k <= 130&&l <=130)
    
        printf("二人ともお入りください");
    
    else if (k>130&&l<=130)
    
        printf("Aさんはお入りください");
    
    else if (k<=130&&l>130)
    
        printf("Bさんはお入りください");
    
    else printf("二人ともお帰りください");
    

    return 0;
}