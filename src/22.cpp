#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    
    if (num1 > num2) {
        cout << "The first number is greater than the second." << endl;
    } else if (num1 < num2) {
        cout << "The second number is greater than the first." << endl;
    } else {
        cout << "Both numbers are equal." << endl;
    }
    
    return 0;
}
