// Q4: Create a class Number containing an integer data member.
// Create two objects and overload the following operators:
//   + to add the values.
//   - to subtract the values.
// Display the results of both operations.

#include <iostream>
using namespace std;

class Number {
    int value;
public:
    Number(int v = 0) : value(v) {}

    // Overload binary + operator
    Number operator+(const Number &obj) {
        Number temp;
        temp.value = value + obj.value;
        return temp;
    }

    // Overload binary - operator
    Number operator-(const Number &obj) {
        Number temp;
        temp.value = value - obj.value;
        return temp;
    }

    int getValue() {
        return value;
    }
};

int main() {
    Number n1(30), n2(12);
    Number sum = n1 + n2;
    Number diff = n1 - n2;

    cout << "First number = " << n1.getValue() << endl;
    cout << "Second number = " << n2.getValue() << endl;
    cout << "Sum = " << sum.getValue() << endl;
    cout << "Difference = " << diff.getValue() << endl;

    return 0;
}
