#include <iostream>
#include <string>
using namespace std;

int main(){
    string response;

    cout << "Do you want to print a countdown? (Yes/No) ";
    cin >> response;
    if(response == "Yes"){
        for(int a = 10; a >= 0; a--){
            cout << a << endl;
        }
    }
    else{
        cout << "Maybe next time!" << endl;
    }
    return 0;
}
