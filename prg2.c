#include<stdio.h>
struct Account
{
  int accno;
  char name[50];
  float balance;
};
void deposit(struct Account *a, float amount) 
{ 
  a->balance +=amount;
  printf("Amount has been deposited succesfully\n");
  }
void withdraw(struct Account *a, float amount) 
{
  if(a->balance >=amount)
  {
  a->balance -=amount;
  printf("Withdrawal successfully\n");
  }
  else
  {
  printf("Insufficient balance\n");
  }
}
void display(struct Account a)
  {
  printf("Account number: %d\n",a.accno);
  printf("Name: %s\n",a.name);
  printf("Balance: %.2f\n",a.balance);
  }
int main() {
    struct Account a;
    int choice;
    float amount;
    printf("Enter Account Number: ");
    scanf("%d", &a.accno);
    printf("Enter Name: ");
    scanf("%s", a.name);
    printf("Enter Initial Balance: ");
    scanf("%f", &a.balance);
while(1) 
{
    printf("\n1. Deposit\n2. Withdraw\n3. Display\n4. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    switch(choice) {
            case 1:
                printf("Enter amount to deposit: ");
                scanf("%f", &amount);
                deposit(&a, amount);
                break;

            case 2:
                printf("Enter amount to withdraw: ");
                scanf("%f", &amount);
                withdraw(&a, amount);
                break;

            case 3:
                display(a);
                break;

            case 4:
                return 0;

            default:
                printf("Invalid Choice\n");
        }
    }

    return 0;
}
