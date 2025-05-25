#include <iostream>
using namespace std;

int main(){
    float num1, num2, num3, num4, num5, average;
    int count = 5;

    cout << "Enter 1st Integer: ";
    cin >> num1;
    cout << "Enter 2nd Integer: ";
    cin >> num2;
    cout << "Enter 3rd Integer: ";
    cin >> num3;
    cout << "Enter 4th Integer: ";
    cin >> num4;
    cout << "Enter 5th Integer: ";
    cin >> num5;
    average = (num1+num2+num3+num4+num5)/count;

    cout << "The Average is: "<< average << endl;
    return 0;
}
