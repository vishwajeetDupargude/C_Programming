#include<stdio.h>
void PrintEven(int iNo)
{
    int iCnt = 0;
    int iNum = 2;

    if (iNo <= 0)
    {
        return ;
    }
    for(iCnt = 1; iCnt<=iNo;iCnt++)
    {
        printf("%d\n",iNum);
        iNum= iNum+2;
    }

}
int main()
{
    int iValue = 0;
    printf("Enter Even number ");
    scanf("%d",&iValue);
    PrintEven(iValue);
    return 0;
}