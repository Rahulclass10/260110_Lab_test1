#include<stdio.h>
int main()
{
    float deposit_amount;
    float withdraw_amount;
    int menu;
    float balance=500;

    printf("The menu choices are:\n");
    printf("   Check Balance:1\n   Deposit:2\n   Withdraw:3\n   Exit:4\n");
    printf("Enter menu number:\n");
    scanf("%i",&menu);

    if(menu==1)
    {
        printf("\nYour Current balance is %f $\n",balance);
    }

    else if(menu==2)
    {
        printf("Enter the amount you want to deposit: ");
        scanf("%f", &deposit_amount);

            if (deposit_amount > 0)
            {
                balance = balance + deposit_amount;
                printf("%0.2f$ Deposited.\n",deposit_amount);
                printf("Your new balance is %.2f$ now.\n", balance);
            }
            else
                {
                printf("You entered invalid Amount\n");
                }

    }
    else if(menu==3)
    {
        printf("Enter the amount you want to withdraw:");
        scanf("%f", &withdraw_amount);

            if (withdraw_amount > 0 && withdraw_amount <= balance)
            {
                balance = balance - withdraw_amount;
                printf("You withdraw %f$\n",withdraw_amount);
                printf("Your new balance is %.2f$ now.\n", balance);
            }
            else if (withdraw_amount <= 0)
            {
                printf("You enter invalid Amount\n");
            }
            else {
                printf("You don't have enough balance in your account.\n");
            }
    }
    else if(menu==4)
    {
        printf("Thank you\n");
    }
    else
    {
        printf("Invalid menu option.\n");
    }
}
