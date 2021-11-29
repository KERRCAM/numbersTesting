#include <iostream>
#include <cmath>

using namespace std;

int main() {

    cout << "numbers testing:" << endl;
    cout << 40 << endl;
    cout << 348.8284 << endl;
    cout << 5 + 7 << endl;
    cout << 5 - 7 << endl;
    cout << 5 * 7 << endl;
    cout << 17 / 4 << endl;
    cout << 15 % 4 << endl;
    cout << 4 + 5 * 10 << endl; //follows bidmas

    int num1 = 5;
    double num2 = 5.5;
    num1++;  // plus 1
    cout << num1 << endl;
    num1 += 80; // adds 80 ( can replace + with other operators)
    cout << num2 + 9 << endl;
    cout << 10.0 / 3 << endl; // one has to be double to get decimal answer

    //math functions (import at top)
    cout << pow(2, 5) << endl; //2 to power 5
    cout << sqrt(36) << endl; // square root of 36
    cout << round(4.3) << endl; // rounds 4.3 to 4 or 4.7 to 5
    cout << ceil(4.1) << endl; // always rounds up so 4.1 goes to 5
    cout << floor(4.9) << endl; // always rounds down so 4.9 goes to 4
    cout << fmax(3, 10) << endl; // returns larger of two numbers
    cout << fmin(3, 10) << endl; // returns smaller of two numbers

    return 0;
}
