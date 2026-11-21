// Q1: Create a class Counter with an integer data member count.
// Overload the unary ++ operator to increase the value of count by 1.
// Create an object and display its value before and after applying ++.

#include <iostream>
using namespace std;

class Counter {
    int count;
public:
    Counter(int c = 0) : count(c) {}

    // Overload unary prefix ++ operator
    void operator++() {
        count++;
    }

    int getCount() {
        return count;
    }
};

int main() {
    Counter c1(5);

    cout << "Value before ++: " << c1.getCount() << endl;
    ++c1;
    cout << "Value after ++: " << c1.getCount() << endl;

    return 0;
}
