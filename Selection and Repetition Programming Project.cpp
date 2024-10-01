

#include <iostream>
using namespace std;

int main()
{
	float num1;
	string oper;
	int opereval;
	float num2;

	cout << "Enter a number." << endl;
	cin >> num1;
	cout << "Enter an operator. (+, -, /, or *)" << endl;
	cin >> oper;

	cout << "Enter a second number." << endl;
	cin >> num2;

	if (oper == "/" && num2 == 0)
		opereval = 5;
	else if (oper == "-")
		opereval = 2;
	else if (oper == "*")
		opereval = 3;
	else if (oper == "/")
		opereval = 4;
	else if (oper == "+")
		opereval = 1;

	switch (opereval)
	{
	case 1:
		cout << "The result is: " << (num1 + num2);
		break;
	case 2:
		cout << "The result is: " << (num1 - num2);
		break;
	case 3:
		cout << "The result is: " << (num1 * num2);
		break;
	case 4:
		cout << "The result is: " << (num1 / num2);
		break;
	case 5: 
		cout << "Error: Divided by 0.";
		break;
	default:
		cout << "Error: Invalid operation.";
	}

}

