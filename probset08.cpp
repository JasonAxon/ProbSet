#include <iostream>
using namespace std;

int main() {
    string num1 = "987654321987654321";
    string num2 = "123456789123456789";
    string result;
    int carry, a, b, digit1, digit2, sum;

    result = "";
    carry = 0;

    a = num1.length() - 1;
    b = num2.length() - 1;

    while (a >= 0 || b >= 0 || carry > 0) {
        digit1 = (a >= 0) ? num1[a] - '0' : 0;
        digit2 = (b >= 0) ? num2[b] - '0' : 0;

        sum = digit1 + digit2 + carry;
        carry = sum / 10;
        result = char((sum % 10) + '0') + result;

        a--;
        b--;
    }

    cout << "Sum: " << result << endl;

    return 0;
}
