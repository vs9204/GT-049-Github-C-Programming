#include <stdio.h>
int main()
{
    int bill_amount,amount_given,a,b;
    scanf("%d %d",&bill_amount,&amount_given);
    a=bill_amount/amount_given;
    b=bill_amount%amount_given;
    printf("%d\n%d",a,b);
}