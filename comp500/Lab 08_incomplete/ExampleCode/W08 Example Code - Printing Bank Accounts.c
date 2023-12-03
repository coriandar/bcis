#include <stdio.h>

struct Banking_Account
{
	char name[32];
	int pin;
	float balance;
};

void print_banking_details(struct Banking_Account account);

int main(void)
{
	struct Banking_Account accounts[3];
	
	sprintf(accounts[0].name, "Steffan Hooper");
	accounts[0].pin = 7373;
	accounts[0].balance = 1250.0f;
	
	sprintf(accounts[1].name, "Xinyu Hu");
	accounts[1].pin = 1234;
	accounts[1].balance = 2150.0f;
	
	sprintf(accounts[2].name, "Jade Abbott");
	accounts[2].pin = 7777;
	accounts[2].balance = 2250.0f;
	
	print_banking_details(accounts[2]);
	printf("\n");
	
	print_banking_details(accounts[1]);
	printf("\n");
	
	print_banking_details(accounts[0]);
	printf("\n");
	
	return 0;
}

void print_banking_details(struct Banking_Account account)
{
	printf("Account Name: %s\n", account.name);
	printf("Account Balance: $%.2f\n", account.balance);
	printf("Account Pin: %d\n", account.pin);
}