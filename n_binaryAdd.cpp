// Q3: Create a class Number containing an integer data member value.
// Create two objects and overload the binary + operator to add the
// values stored in the two objects. Display the result.

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

    int getValue() {
        return value;
    }
};

int main() {
    Number n1(15), n2(25);
    Number n3 = n1 + n2;

    cout << "First number = " << n1.getValue() << endl;
    cout << "Second number = " << n2.getValue() << endl;
    cout << "Result (sum) = " << n3.getValue() << endl;

    return 0;
}
