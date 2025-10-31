/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int diff;
    char large; 
    char small;
    
    printf("アルファベットの小文字を入力してください>>>");
    scanf("%c", &small);
    diff = 'A' - 'a';
    large = small + diff;
    
    printf("小文字は%c  大文字は%c/n", small, large);

    return 0;
}