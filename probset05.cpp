#include <iostream>
using namespace std;

int main(){
    float principal, rate, time, interest, total;

    cout << "Enter Principal: P";
    cin >> principal;
    cout << "Enter Interest Rate (In Percentage): ";
    cin >> rate;
    cout << "Enter Time (In Years): ";
    cin >> time;

    interest = principal * (rate/100) * time;
    total = principal + interest;

    cout << "Interest Earned: P" << interest << endl;
    cout << "Total Amount: P" << total << endl;
    return 0;
}
