#include <stdio.h>
#include <string.h>

struct database
{
    char name[100];
    int acc_no;
    int acc_typ;
    char typ_name[50];
    int time;
    float current;
    float interest;
    float balance;
};

void bank();
void new_account(int flag,struct database acc[]);
void account(void);
void caluculate(struct database acc[]);

int n;

int main(void)
{    struct database acc1[100];
    int choice;

    bank();

    printf("Enter your choice:\n");
    printf("\t\t1.Enter a New Account\n\t\t2.Update Old Account\n");

start:
    printf("Enter choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        account();
        new_account(0,acc1);
        break;

    case 2:
        new_account(1,acc1);
        break;

    default:
        printf("!!!Enter a valid number!!!\n");
        goto start;
    }

    return 0;
}

void new_account(int flag,struct database acc[])
{
    if (flag == 0)
    {
        printf("Enter the number of accounts to create: ");
        scanf("%d", &n);



        for (int i = 0; i < n; i++)
        {
            acc[i].acc_no = i+1;
            printf("Enter the information of Account #%d:\n", i + 1);
            printf("Name: ");
            fgets(acc[i].name, 100, stdin);
            printf("Option 01: Savings account\nOption 02: Fixed deposit account\nOption 03: Fixed deposit account !!Under 6 months\nOption 04: Special notice deposit(SND)\n");
            printf("Enter account type(1,2,3,4): ");
            scanf("%i", &acc[i].acc_typ);
            printf("Enter time-span(in month): ");
            scanf("%i", &acc[i].time);
            printf("Enter current balance: ");
            scanf("%f", &acc[i].current);

            fflush(stdin);
        }

        calculate(acc);
    }

    else if (flag == 1)
    {
        // old account
        printf("Account list: \n");
        for (int i = 0; i < n; i++)
            printf("Account #%i:%s\n", acc[i].acc_no, acc[i].name);

        int no;
        printf("Chose a account number to update: ");
        scanf("%f", &no);

        int j = acc[no].acc_no - 1;
        printf("Update balance: ");
        scanf("%f", &acc[j].current);

        caluculate(acc);
    }
}

void caluculate(struct database acc2[])
{

    // balance calculation with interest
    for (int i = 0; i < n; i++)
    {
        switch (acc2[i].acc_typ)
        {
        case 1:
            acc2[i].interest = 0.035;
            acc2[i].balance = acc2[i].current + (float)acc2[i].time * (acc2[i].current * acc2[i].interest);
            strcpy(acc2[i].typ_name, "Savings account");
            break;

        case 2:
            acc2[i].interest = 0.055;
            acc2[i].balance = acc2[i].current + (float)acc2[i].time * (acc2[i].current * acc2[i].interest);
            strcpy(acc2[i].typ_name, "Fixed Deposit 01");
            break;

        case 3:
            acc2[i].interest = 0.065;
            acc2[i].balance = acc2[i].current + (float)acc2[i].time * (acc2[i].current * acc2[i].interest);
            strcpy(acc2[i].typ_name, "Fixed Deposit 02");
            break;

        case 4:
            acc2[i].interest = 0.045;
            acc2[i].balance = acc2[i].current + (float)acc2[i].time * (acc2[i].current * acc2[i].interest);
            strcpy(acc2[i].typ_name, "Special notice(SND)");
            break;

        default:
            printf("Enter a valid account type.\n");
        }
    }
}

void bank()
{
    printf("       /////////////////\\\\      \n");
    printf("      /   BANK Account   \\\\     \n");
    printf("     /  Management system \\\\    \n");
    printf("    /______________________\\\\   \n");
    printf("    |  |                 |  |    \n");
    printf("    |  |                 |  |    \n");
    printf("    |__|_________________|__|    \n");
}

void account(void)
{
    printf("\n\n\n\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\");
    printf("Accout types: ");
    printf("Option 01: Savings account\n");
    printf("interest rate 3.50%%\n");

    printf("Option 02: Fixed deposit account !!Under 6 months\n");
    printf("interest rate 5.50%%\n");

    printf("Option 03: Fixed deposit account !!Under 6 months\n");
    printf("interest rate 6.50%%\n");

    printf("Option 04: Special notice deposit(SND)\n");
    printf("interest rate 4.50%%\n");
    printf("\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\n\n\n");
}
