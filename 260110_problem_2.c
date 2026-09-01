#include<stdio.h>
int main()
{
    float unit,bill;
    int account_type,peak;


    printf("The peak hour usages are:\n");
    printf("High Pick:1\nNormal:0\n");
    printf("Enter your pick hour usages:\n");
    scanf("%i", &peak);

    if(peak<0 || peak>1)
    {
        printf("Invalid value\n");
        return 1;
    }

    printf("Your Account types are:\n");
    printf("standard:0\nSubsidized Low-Income:1\n");
    printf("Enter your account type code:");
    scanf("%i",&account_type);

    if(account_type>1 || account_type<0)
    {
        printf("Invalid value\n");
        return 1;
    }

    printf("Enter the value of used Units Consumed:\n");
    scanf("%f",&unit);
    printf("Total unit used is:%f\n", unit);

    if (unit<=100)
    {
        bill=unit*0.10;
    }
    else if (unit<=200)
    {
        bill =((unit-100)*0.15)+ (100*0.10);
    }
    else if (unit>200)
    {
        bill = (unit-200)*0.25+(100*0.10)+(100*0.15);
    }

    if (peak==1)
    {
        bill=bill+15;
    }
    if(account_type==1)
    {
        bill=bill-(bill*0.2);
    }
    printf("Total bill is %0.2f $", bill);

}
