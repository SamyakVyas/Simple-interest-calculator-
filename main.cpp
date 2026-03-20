#include <iostream>
using namespace std;

int main()
{
    double principal, rate, time, interest, total;
    char again;

    cout << "Welcome to Simple Interest Calculator!\n\n";

    do
    {
        cout << "Enter principal amount: $";
        cin >> principal;

        cout << "Enter annual interest rate (%): ";
        cin >> rate;

        cout << "Enter time (years): ";
        cin >> time;

        if (principal <= 0 || rate <= 0 || time <= 0)
        {
            cout << "Invalid input. All values must be greater than 0.\n\n";
        }
        else
        {
            interest = (principal * rate * time) / 100;
            total = principal + interest;

            cout << "\n--- Results ---\n";
            cout << "Principal: $" << principal << "\n";
            cout << "Interest Rate: " << rate << "%\n";
            cout << "Time: " << time << " years\n";
            cout << "Interest Earned: $" << interest << "\n";
            cout << "Total Amount: $" << total << "\n\n";
        }

        cout << "Calculate again? (y/n): ";
        cin >> again;
        cout << "\n";

    } while (again == 'y' || again == 'Y');

    cout << "Goodbye!\n";
    return 0;
}
