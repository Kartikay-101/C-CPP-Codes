//Write a program of working of atm transaction in c?
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int choice, amount, pin;
    float balance = 100000.00;

    printf("\n\n\t\t\t****Welcome to ATM Transaction!****\n\n");

    printf("\t\tEnter your PIN: ");
    scanf("%d", &pin);

    if (pin == 1234)
    {
        do
        {
            printf("\n1. Withdraw Cash\n2. Deposit Cash\n3. Check Balance\n4. Exit\n\n");
            printf("\t\tEnter your choice: ");
            scanf("%d", &choice);

            switch (choice)
            {
            case 1:
                printf("\n\t\tEnter amount to withdraw: ");
                scanf("%d", &amount);

                if (amount <= balance)
                {
                    balance -= amount;
                    printf("\t\tPlease collect your cash.\n");
                    printf("\t\tYour new balance is: %.2f\n", balance);
                }
                else
                {
                    printf("\t\tInsufficient balance.\n");
                }
                break;

            case 2:
                printf("\t\tEnter amount to deposit: ");
                scanf("%d", &amount);

                balance += amount;
                printf("\t\tYour new balance is: %.2f\n", balance);
                break;

            case 3:
                printf("\t\tYour current balance is: %.2f\n", balance);
                break;

            case 4:
                printf("\t\tThank you for using ATM.\n");
                exit(0);

            default:
                printf("\n\t\tInvalid choice.\n");
            }
        } while (choice != 4);
    }
    else
    {
        printf("\n\n\t\tIncorrect PIN.\n");
    }

    return 0;
}