#include<stdio.h>
void DisplatFactor(int iNo)
{
    int i = 0;
    

    if (iNo <= 0)
    {
        iNo= -iNo;
    }

        
    for(i = 1; i<=(iNo/2);i++)
    {
        if((iNo%i)==0)
        printf("%d\n",i);
        
    }

}
int main()
{
    int iValue = 0;
    printf("Enter Even number ");
    scanf("%d",&iValue);
    DisplatFactor(iValue);
    return 0;
}