#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Enter the first value a: ";
    cin >> a;
    cout << "Enter the second value b: ";
    cin >> b;

    // Swapping logic
    c = a;
    a = b;
    b = c;

    // Output the swapped values
    cout << "After swapping:" << endl;
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;

    return 0;
}
