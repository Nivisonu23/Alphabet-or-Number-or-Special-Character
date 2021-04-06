#include<stdio.h>
int main()
{
    char c;
    scanf("%c",&c);
    if((c>='a' && c<='z') || (c>='A' && c<='Z'))
        printf("ALPHABET");
    else if(c>='0' && c<='9')
        printf("NUMBER");
    else
        printf("SPECIAL CHARACTER");
    return 0;
}
