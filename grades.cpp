// Antarleen Chand 
// PRN : 24070123018 | ENTC A1 
#include <iostream>
using namespace std;

int main() {
    float sub1, sub2, sub3, sub4, sub5, avg;

    cout << "Enter marks for Subject 1: ";
    cin >> sub1;
    cout << "Enter marks for Subject 2: ";
    cin >> sub2;
    cout << "Enter marks for Subject 3: ";
    cin >> sub3;
    cout << "Enter marks for Subject 4: ";
    cin >> sub4;
    cout << "Enter marks for Subject 5: ";
    cin >> sub5;

    avg = (sub1 + sub2 + sub3 + sub4 + sub5) / 5;

    cout << "Average = " << avg << endl;

    if (avg >= 90) {
        cout << "Grade is O";
    } else if (avg >= 85) {
        cout << "Grade is A+";
    } else if (avg >= 75) {
        cout << "Grade is A";
    } else if (avg >= 65) {
        cout << "Grade is B+";
    } else if (avg >= 55) {
        cout << "Grade is B";
    } else if (avg >= 40) {
        cout << "Grade is C";
    } else if (avg > 0) {
        cout << "You have failed";
    } else {
        cout << "Invalid input. Marks must be positive.";
    }

    return 0;
}

/* OUTPUT 
Enter marks for Subject 1: 39
Enter marks for Subject 2: 78
Enter marks for Subject 3: 94
Enter marks for Subject 4: 55
Enter marks for Subject 5: 82
Average = 69.6
Grade is B+
*/
