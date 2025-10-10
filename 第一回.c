/**                               第一回
                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.**/

#include <stdio.h>

int main()
{
    /**名前をつけて数字を保存しとく**/
    int G = 6;
    /**\nは、改行する**/
    printf("%d(- -  )\n", G);
    G = G*3/2;
    /**printfは、""の間に、表記したい文字を書く**/
    printf(" (  > <)%d", G);

    return 0;
}