// ANTARLEEN CHAND
// 24070123018 | ENTC A1


#include <iostream>
using namespace std;

int main() {
    float a;
    cout << "Enter any number: ";
    cin >> a;

    if (a > 0) {
        cout << "The number " << a << " is positive.";
    } else if (a < 0) {
        cout << "The number " << a << " is negative.";
    } else {
        cout << "The number is zero.";
    }

    return 0;
}

/* OUTPUT 
Enter any number: -45
The number -45 is negative.

-----------------------------

Enter any number: 22
The number 22 is positive.

-----------------------------

Enter any number: 0
The number is zero.
  */
