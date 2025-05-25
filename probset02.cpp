#include <iostream>
using namespace std;

int main(){
    float length, width, area;

    cout << "Enter Length of the Box: ";
    cin >> length;
    cout << "Enter Width of the Box: ";
    cin >> width;
    area = length * width;

    cout << "Area of the Box: " << area << " units." << endl;
    cout << "Visual Representation: " << endl;

    for(int a = 0; a < length; a++){
        for(int b = 0; b < width; b++){
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
