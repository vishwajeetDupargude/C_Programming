// Accept number divisible by 5 or not 

#include<stdio.h>
#include<stdbool.h>

bool Check (int iNo)
{
    if((i%5)==0)
    {
        return true;
    }
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter a Frequeency:");
    scanf("%d",&iValue);

    bRet = Check(iValue);

    if(bRet == true)
    {
        printf("Divisble by 5");
    }
} 