#include <iostream>
using namespace std;

int main(){
    float d1, d2, d3, tsales, avspd;
    float days = 3;

    cout << "Enter  Day 1 Sales: P";
    cin >> d1;
    cout << "Enter  Day 2 Sales: P";
    cin >> d2;
    cout << "Enter  Day 3 Sales: P";
    cin >> d3;

    tsales = d1 + d2+ d3;
    avspd = tsales/days;

    cout << "Total Sales: P" << tsales << endl;
    cout << "Average Sales per Day: P" << avspd << endl;
    return 0;
}