#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int choice = 0;
	do
	{
		cout << "Pick an option from the drop down menu" << endl;
		cout << "1 = Factorial, 2 = Leap year or Not, 3 = Maximum Number, 4 = Division, 5 = Exit" << endl;
		cin >> choice;

		switch(choice)
		{
		case 1 : // Factorial
		{
			unsigned short num;
			unsigned long output = 1;
			cout << "Enter a positive integer between 1 and 20: ";
			cin >> num;
			while(num > 20)
			{
				cout << "Error! Enter a positive integer between 1 and 20:";
				cin >> num;
			}

			for (int i = 1; i < (num+1); i++)
			{
				output *= i;
			}
			cout << "Factorial of " << (unsigned long) num << " = " << output << endl;
			break;
		}
		case 2 :// Leap year or Not
		{
			unsigned int year;
			cout << " Enter a desired year: ";
			cin >> year;
			if( ((year % 4) == 0) && ( (year % 100) == 0 ) && ( (year % 400) == 0 ) )
			{
				cout << year << " is a leap year\n";
			}
			if( ((year % 4) == 0))
			{
				cout << year << " is a leap year\n";
			}
			else
			{
				cout << year << " is not a leap year\n";
			}
			break;
		}
		case 3: //Max Number
		{
			float num1, num2;
			cout << "Enter your first number\n";
			cin >> num1;
			cout << "Enter your second number\n";
			cin >> num2;
			cout << "Maximum Number: " << ((num1 > num2) ? num1 : num2) << endl;//(num1 > num2)? is like an if statement- num1(True): num2 (False)
			break;
		}
		case 4: // Division
		{
			cout << "What are the two operands you would like divide" << endl;
			float y ;
			int x;
			cin >> x >> y;
			if (y == 0 )
			{
				cout << "Cannot divide anything by zero\n";
			}
			else
			{
				cout << x << " " <<"/" << " " << y << " " << "is" << " " << ((float)x / y)<< endl;
			}
			break;
		}
		case 5: // Exit
		{
			cout << "BYE! It was nice seeing ya";
			break;
		}
		default:
		{
			cout << "Error! Operator does not exist in this program\n";
			break;
		}

		}
	} while (choice != 5);

	return 0;
}

