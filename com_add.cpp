// Q5: Create a class Complex with two data members real and imaginary.
// Overload the + operator to add two complex number objects and
// display the resulting complex number.
//
// Example:
// First number = 3 + 4i
// Second number = 2 + 5i
// Result = 5 + 9i

#include <iostream>
using namespace std;

class Complex {
    int real, imaginary;
public:
    Complex(int r = 0, int i = 0) : real(r), imaginary(i) {}

    // Overload binary + operator
    Complex operator+(const Complex &obj) {
        Complex temp;
        temp.real = real + obj.real;
        temp.imaginary = imaginary + obj.imaginary;
        return temp;
    }

    void display() {
        cout << real << " + " << imaginary << "i" << endl;
    }
};

int main() {
    Complex c1(3, 4), c2(2, 5);
    Complex result = c1 + c2;

    cout << "First number = ";
    c1.display();
    cout << "Second number = ";
    c2.display();
    cout << "Result = ";
    result.display();

    return 0;
}
