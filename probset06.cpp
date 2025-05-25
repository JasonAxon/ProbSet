#include <iostream>
using namespace std;

int main() {
    int num1, num2;

    cout << "Enter first integer: ";
    cin >> num1;
    cout << "Enter second integer: ";
    cin >> num2;

    int a = num1, b = num2;
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    int gcd = a;

    int lcm = (num1 * num2) / gcd;

    cout << "Greatest Common Divisor (GCD): " << gcd << endl;
    cout << "Least Common Multiple (LCM): " << lcm << endl;

    return 0;
}
