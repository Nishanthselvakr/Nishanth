#include <stdio.h>
int main()
{
    char n;
    int LVowel, UcaseVowel;
    printf("Enter an alphabet: ");
    scanf("%c",&c);
    isLVowel = (n == 'a' || n == 'e' || n == 'i' || n == 'o' || c == 'u');
    isUVowel = (n == 'A' || n == 'E' || n == 'I' || n == 'O' || c == 'U');
    if (LVowel || UVowel)
        printf("%c is a vowel.", c);
    else
        printf("%c is a consonant.", c);
    return 0;
 }
