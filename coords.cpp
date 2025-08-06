#include <iostream>
using namespace std;

int main() {
    float x, y;
    cout << "Enter x coordinate: ";
    cin >> x;
    cout << "Enter y coordinate: ";
    cin >> y;

    cout << "Coordinates (x = " << x << ", y = " << y << ") are in: ";

    if (x > 0 && y > 0) {
        cout << "1st Quadrant";
    } else if (x < 0 && y > 0) {
        cout << "2nd Quadrant";
    } else if (x < 0 && y < 0) {
        cout << "3rd Quadrant";
    } else if (x > 0 && y < 0) {
        cout << "4th Quadrant";
    } else if (x == 0 && y == 0) {
        cout << "Origin";
    } else {
        cout << "On the Axis";
    }

    return 0;
}

/* OUTPUT : 
Enter x coordinate: -2
Enter y coordinate: -2
Coordinates (x = -2, y = -2) are in: 3rd Quadrant

----------------------------------

Enter x coordinate: 0
Enter y coordinate: 5
Coordinates (x = 0, y = 5) are in: On the Axis

----------------------------------

Enter x coordinate: 0
Enter y coordinate: 0
Coordinates (x = 0, y = 0) are in: Origin
  */
