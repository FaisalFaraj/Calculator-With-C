/*
   #*#*# This is a simple calculator created and programmed BY: Faisal Faraj            #*#*#
   #*#*# This code under GPL ( GNU public license ) you can use it wherever you want!       #*#*#
   #*#*# This code has been published in 2019-October-20th! #*#*#
*/
	#include <stdio.h> // Importing Standard input/output library!
	#include <stdlib.h> // Importing Standard library!
	#include <string.h> // Importing String library!

	int main() // The main function, program starting from here!
	{
		float a, b, result; // Declaring the main variables used in switch cases.
		char x[1], Name[10] = "Mohammed", InputName[10]; // Declaring the authentication variables.
		int c, Pass = 112233, InputPass; // storing the values of authentication variables.

		printf("Please Enter your Name: "); // Asking for the Name that stored in the variable.
		gets(InputName); // Getting the Name .
		printf("\n");
		printf("Please enter your Password: "); // Asking for the Password that stored in the variable.
		scanf("%d", & InputPass); // Getting the Password .
		if (strcmp(InputName, Name) == 0 && InputPass == Pass) // Checking if the Name and Password matched with the stored data .
		{
			printf("\n(( Welcome %s to your calculator ^_^, now you can use the calculator))\n",Name); // Welcoming the user after entering correct authentication's data .
			printf("\n\nplease enter the first number: "); // Asking for the first number which will be calculated later .
			scanf("%f",&a); // Getting, taking or storing the number from the user!
			printf("the first number is (  %.2f  )\n", a); // Printing back the number that user have entered!
			printf("________________________________");
			printf("\nplease enter the second number: "); // Asking for another number from user.
			scanf("%f",&b); // Getting, taking or storing the number from the user!
			printf("the second number is (  %.2f  )\n", b); // Printing back the number that user have entered!
			printf("\ndo you want to do any operation between these numbers ?\n"); // Asking user if he want to make operation between numbers.
			printf("please press (y) to continue, or (n) to exit: \t"); // Asking to put either 'y' if agreed or 'n' if not.
			scanf("%s",&x); // Getting the selection from the user.

			if (x[0] == 'y') // Checking if user has entered Y, then it should start program.
			{
				printf("\n\nWhich one of these operations do you want?\n\n"); // Asking for the operation type from the user
				printf("1- Addition\n____________________________\n\n"); // Addition.
				printf("2- Subtraction\n____________________________\n\n"); // Subtraction.
				printf("3- Multiplication\n____________________________\n\n"); // Multiplication.
				printf("4- Division\n____________________________\n\n"); // Division.
				printf("5- Cube of first number\n____________________________\n\n"); // Cube of the first number entered.
				printf("6- Cube of second number\n____________________________"); // Cube of the second number entered.
				printf("\n\nPlease Enter your choice number : "); // Asking for the number of the operation option.
				scanf("%d", & c); // Taking, scanning, or getting the selected operation number from the user.

                switch (c) // Starting switch cases, to give the result of the selected operation.
				{
					case 1:
						result = a + b; // The addition of two numbers.
						printf("\n\nYou've chosen addition : %.2f + %.2f = %.2f\n\n",a,b,result); // Printing the result of the Addition operation.
						break; // Break the case ( End the case statement ).
					case 2:
						result = a - b; // The subtraction of two numbers.
						printf("\n\nYou've chosen subtraction : %.2f - %.2f = %.2f\n\n",a,b,result); // Printing the result of the Subtraction operation.
						break; // Break the case ( End the case statement ).
					case 3:
						result = a * b; // The multiplication of two numbers.
						printf("\n\nYou've chosen multiplication : %.2f × %.2f = %.2f\n\n",a,b,result); // Printing the result of the Multiplication operation.
						break; // Break the case ( End the case statement ).
					case 4: // Starting case (4)
						if ((b == 0 && a == 0) || b == 0) // Checking if b value is equal to zero.
						{
							printf("it is impossible!!, you can't divide by ZERO\n\n"); // Printing a warning message for this operation.
						}
						else // If the value of b is greater than zero then continue.
						{
							result = a / b; // The division of two numbers.
							printf("\n\nYou've chosen division : %.2f ÷ %.2f = %.2f\n\n",a,b,result); // Printing the result of the Division operation.
						}
						break; // Break the case ( End the case statement ).
					case 5:
						result = a * a * a; // The cube the first number.
						printf(
							"\n\nYou've chosen the cube of first number is : %.2f ^ 3 = %.2f\n\n",a,result); // Printing the result of the cube the first number operation.
						break; // Break the case ( End the case statement ).
					case 6:
						result = b * b * b; // The cube the second number.
						printf(
							"\n\nYou've chosen the cube of second number is : %.2f ^ 3  = %.2f\n\n",b,result); // Printing the result of the Cube the second number operation.
						break; // Break the case ( End the case statement ).
					default: // Default means, if no option selected then process this statement.
						printf("\n\nPlease enter between 1 <--> 6\nPlease try again later\n"); // This line after printed it the program will stop directly.
						system("pause");
						break; // Break the case ( End the case statement ).
				}
			}
		if (x[0] == 'n') // if the user selected n, then that means NO, pause the program.
		{
			printf("\nThank you for using this program, we hope you like it!!\n\n");
			system("pause");
		}
		}
		if(strcmp(InputName, Name) != 0 && InputPass != Pass) // Else the authentication data entered is not correct then print this.
		{
			printf("!!*Sorry you're not the owner, please try again later*!!\n\n");
			system("pause");
		}
		return 0; // Return 0 means, identify that the program has executed successfully.
	}
