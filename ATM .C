#include <stdio.h>

int main()
{
    int pin, choici;
    float balance = 10000, amount;
    //   check pin
    printf("Enter your pin :");
    scanf("%d", &pin);

    if (pin != 9050)
    {
        printf("Wrong pin get out...\n");
        return 0;
    }
    // loop redy kar te he
    while (1)
    {
        printf("\n1. Check blance\n2. deoposit\n3. Withraw\n4. Exit\n");
        printf("choosi option:");
        scanf("%d", &choici);

        switch (choici)
        {
        case 1:
            printf("blance: Rs. %.2f\n", balance);
            break;

        case 2:
            printf("Enter your Doeposit Amount :");
            scanf("%f", &amount);
            if (amount > 0)
            {
                balance = balance + amount;
                printf("Deposited! New blance: Rs. %.2f\n", balance);
            }
            else
            {
                printf("Invalid amount !\n");
            }
            break;

        case 3:
            printf("Enter You Withdraw Amount :");
            scanf("%f", &amount);
            if (amount > balance)
            {
                printf("Insufficient balance !\n");
            }
            else if (amount <= 0)
            {
                printf("Invalid amount\n");
            }
            else
            {
                balance = balance - amount;
                printf("Please collect cash. Remaining Balance: Rs. %.2f\n", balance);
            }
            break;

        case 4:
            printf("Thank you for using ATM. Goodbye!\n");
            return 0;

        default:
            printf("Invalid option please choose 1 to 4. \n");
        }
    }
    return 0;
}
