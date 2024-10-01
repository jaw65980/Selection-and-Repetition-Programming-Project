

#include <iostream>
using namespace std;

int main()
{
    //These variables will be used in the calculation.
    float num1;
    string oper;
    float num2;
    float ans;

    //These prompts are for user inputs. Note how users are provided with a list of available operators.
    cout << "Enter a number. " << endl;
    cin >> num1;
    cout << endl << "Enter an operator (+, -, /, or *). " << endl;
    cin >> oper;
    cout << endl << "Enter a second number. " << endl;
    cin >> num2;

    //The conditions of each calculation. Before any calculating is done, the program must ensure the user
    //is not trying to divide by 0. Additionally, if the user enters an operator other than the ones listed,
    //the program will automatically output an error.
    if (oper == "/" && num2 == 0)
        cout << endl << "Error: Divided by 0" << endl;
    else if (oper == "+")
        cout << "Your answer is: " << (ans = num1 + num2);
    else if (oper == "-")
        cout << "Your answer is: " << (ans = num1 - num2);
    else if (oper == "*")
        cout << "Your answer is: " << (ans = num1 * num2);
    else if (oper == "/")
        cout << "Your answer is: " << (ans = num1 / num2);
    else
        cout << endl << "Error: invalid response. " << endl;

}

