#include <stdio.h>
#include <string.h>


int main()
{
	char option;
	double balance = 50000.00;


	/* Greeting message */
	printf("\nHello, Welcome to FRONJO-INITIATVE. With us, Banking has been  made easy. \n");


	/* Create an account - Implementing registration */
	char firstname[50], lastname[50];

	printf("Please create an account \nEnter your first and last names here: ");
	scanf("%s %s", firstname, lastname);

	char pass[20];
	char val[20];
	int value;
	int i = 3;
	int passwordCorrect = 0; //Flag var to track correct password validation.

	printf("Create a passowrd: ");
	scanf("%s", pass);

	printf("Confirm  passowrd: ");
	scanf("%s", val);

	value = strcmp(pass, val);

	if (value != 0)
		while (i >= 0)
		{
			printf("\n Your passwords dont match \n");
			printf("Try again, Re-enter password: ");
			scanf("%s", val);

			value = strcmp(pass, val);

			if ( value == 0)
			{
				passwordCorrect = 1;
				break;
			}
			if (i > 0)
				printf("Passwords dont match. You have %d more attempts \n", i);
			else
				printf("Sorry. Password mismatch ");
			i--;
		}
	else
		passwordCorrect = 1;

	if (passwordCorrect)
	{
		printf("Welcome to faster banking with FRONJO-INITIATVE . \nYou have a fixed amount of 50,000 \n \n");

		while(1)
		{
			printf("Menu: \n");
			printf("a) Transfer funds \n");
			printf("b) Deposit funds \n");
			printf("c) Check balance \n");
			printf("d) Bill payment \n");
			printf("e) Recharge and data \n");
			printf("f)  Quit the program
			printf("Select an option: ");
			scanf(" %c", &option);

			switch (option)
			{
				case 'a':
					printf("Option a: Transfer Money\n");
					/* Add code to transfer money */
					break;

				case 'b':
					printf("Option b: Deposit Money\n");
					/* Add code to deposit money */
					break;

				case 'c':
					printf("Option c: Check balance\n");
					/* Add code to check balance */
					break;
				case 'd':
					printf("Option d: Bill payment\n");
					/* Add code to pay bills */
					break;
				case 'e':
					printf("Option d: Top up and data\n");
					/* Add code to top up */
					break;
				case 'f':
					printf("Option f: Quit the program\n");
					return 0;


			}	


		}

	}

	return 0;
}

