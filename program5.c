#include<stdio.h>

typedef int bool;
#define TRUE 1
#define FALSE 0

bool checkVowel(char cvalue)
{
    if (cvalue == 'a' || cvalue == 'e' || cvalue == 'i' ||
        cvalue == 'o' || cvalue == 'u' ||
        cvalue == 'A' || cvalue == 'E' || cvalue == 'I' ||
        cvalue == 'O' || cvalue == 'U')
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    char cValue = '\0';
    bool bRet = FALSE;

    printf("Enter a character: ");
    scanf(" %c", &cValue);  
    bRet = checkVowel(cValue);

    if (bRet == TRUE)
    {
        printf("It is a vowel\n");
    }
    else
    {
        printf("It is not a vowel\n");
    }

    return 0;
}
