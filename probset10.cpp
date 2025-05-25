#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter number of transactions: ";
    cin >> n;

    if (n == 0) {
        cout << "No transactions to process." << endl;
        return 0;
    }

    string* dates = new string[n];
    double* amounts = new double[n];
    string* descriptions = new string[n];

    for (int i = 0; i < n; i++) {
        cout << "Enter date (YYYY-MM-DD): ";
        cin >> dates[i];
        cout << "Enter amount: ";
        cin >> amounts[i];
        cout << "Enter descritpion: ";
        cin >> descriptions[i];
    }

    double net_balance = 0, total_deposits = 0, total_withdrawals = 0;
    for (int i = 0; i < n; i++) {
        net_balance += amounts[i];
        if (amounts[i] > 0)
            total_deposits += amounts[i];
        else
            total_withdrawals += amounts[i];
    }

    double threshold;
    cout << "Enter withdrawal threshold: ";
    cin >> threshold;

    cout << "Transactions exceeding threshold:" << endl;
    for (int i = 0; i < n; i++) {
        if (amounts[i] <= -threshold) {
            cout << dates[i] << " " << amounts[i] << " " << descriptions[i] << endl;
        }
    }

    cout << "Total transactions: " << n << endl;
    cout << "Net balance: " << net_balance << endl;
    cout << "Total deposits: " << total_deposits << endl;
    cout << "Total withdrawals: " << total_withdrawals << endl;

    delete[] dates;
    delete[] amounts;
    delete[] descriptions;

    return 0;
}