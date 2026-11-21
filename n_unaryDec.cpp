// Q2: Create a class Number with an integer data member value.
// Overload the unary -- operator to decrease the value of the object by 1.
// Display the value before and after applying the operator.

#include <iostream>
using namespace std;

class Number {
    int value;
public:
    Number(int v = 0) : value(v) {}

    // Overload unary prefix -- operator
    void operator--() {
        value--;
    }

    int getValue() {
        return value;
    }
};

int main() {
    Number n1(10);

    cout << "Value before --: " << n1.getValue() << endl;
    --n1;
    cout << "Value after --: " << n1.getValue() << endl;

    return 0;
}
