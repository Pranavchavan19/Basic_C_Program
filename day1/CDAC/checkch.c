#include<stdio.h>
int main()
{
    char ch;
    printf("enter a character");
    scanf("%c",&ch);
    if(ch== 'a'|| 'e' || 'i' ||'o'  ||'u')
    {
        printf("given character is vowel");
    }
    else{
        printf("given character is consonant");
    }
}