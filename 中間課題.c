/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <string.h>

int main(void) 
{
    char password[100];
    int hasUpper = 0;
    int hasLower = 0;

    printf("パスワードを入力して下さい。: ");
    scanf("%s", password);

    for (int i = 0; password[i] != '\0'; i++) 
    
        if (password[i] >= 'A' && password[i] <= 'Z')
        
            hasUpper = 1;
        else if (password[i] >= 'a' && password[i] <= 'z') 
            hasLower = 1;

    if (strlen(password) < 8) 
    printf("8文字以上にして下さい。\n");

    if (!hasUpper || !hasLower)
    printf("大文字と小文字の両方を使って下さい。\n");

    if (strlen(password) >= 8 && hasUpper && hasLower) 
    printf("強いパスワードです。\n");
    
    else 
    printf("強いパスワードではありません。\n");

    return 0;
}