// Banking system Project
#include<iostream>
using namespace std;

float Total_amount = 1000.00, amount, withdraw, t_amount;

int menu()
{
	int choice;
	cout << "\n\t 1. Deposite Amount ";
	cout << "\n\t 2. Withdraw Amount ";
	cout << "\n\t 3. Transfer Amount ";
	cout << "\n\t 4. Check Your Details ";
	cout << "\n\t 5. Exit \n\n";
	cout << "\nEnter Your Choice : ";
	cin >> choice;
	cout << "\n\n\n";

	return (choice);
} // End of main()
void Deposite()
{
	cout << "\n Enter Amount You Want to Deposite : ";
	cin >> amount;
	Total_amount += amount;
	cout << "\n\n\t\t\t** THANKS **";
	cout << "\n\n Your Amount " << amount << "  Successfully Deposite\n\n\n";
}//End of Desposite
void Withdraw()
{
	cout << "\n Enter Amount You Want to Withdraw : ";
	cin >> withdraw;
	if (Total_amount >= withdraw)
	{
		Total_amount -= withdraw;
	}
	else
	{
		cout << "\nSORRY!!! Your Current Balance Is Less than Withdraw amount ";
	}
}// End of Withdraw
void Transfer_Amount()
{
	cout << "\nEnter Amount You want to Transfer : ";
	cin >> t_amount;
	if (Total_amount >= t_amount)
	{
		Total_amount -= t_amount;
	}
	else
	{
		cout << "\nSORRY!!! Your Current Balance Is Less than Transfer funds ";
	}
} // End of Transfer Amount
void Details()
{
	cout << "\n\n\t\t\t**** Details ****";
	cout << "\n\nYour Total Current Balance is : " << Total_amount;
	cout << "\n\nYour Total amount of of Deposite is : " << amount;
	cout << "\n\nYour Total amount of Withdraw is : " << withdraw;
	cout << "\n\nYour Total Transfer amount is : " << t_amount;
	cout << "\n\n\n";
} // End of Details
int main()
{
	while (true) // Infinite Loop to repeat switch as Yours want.
	{
		system("cls");

		switch (menu())
		{
		case 1:
		{
			Deposite();
			Total_amount += amount;
			system("pause");
			break;
		}
		case 2:
		{
			Withdraw();
			if (Total_amount >= withdraw)
			{
				Total_amount -= withdraw;
			}
			system("pause");
			break;
		}
		case 3:
		{
			Transfer_Amount();
			if (Total_amount >= t_amount)
			{
				Total_amount -= t_amount;
			}
			system("pause");
			break;
		}
		case 4:
		{
			Details();
			system("pause");
			break;
		}
		case 5:
		{
			exit(0);
			break;
		}
		default:
		{
			cout << "SORRY! You Entered Wrong operator";
		}
		system("pause");
		} // End of Switch 
	} // End of Infinite Loop


	return 0;
} // End of main()