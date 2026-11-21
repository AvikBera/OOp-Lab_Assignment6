// Q6: Create a class Student with a data member CGPA.
// Create two student objects and overload the following relational operators:
//   == to check whether both students have the same CGPA.
//   >  to check which student has the higher CGPA.
// Display an appropriate message based on the comparison.

#include <iostream>
using namespace std;

class Student {
    float cgpa;
public:
    Student(float c = 0.0) : cgpa(c) {}
bool operator==(const Student &obj) const {
    return cgpa == obj.cgpa;
}

bool operator>(const Student &obj) const {
    return cgpa > obj.cgpa;
}
    float getCGPA() {
        return cgpa;
    }
};

int main() {
    Student s1(8.5), s2(9.2);

    cout << "Student 1 CGPA = " << s1.getCGPA() << endl;
    cout << "Student 2 CGPA = " << s2.getCGPA() << endl;

    if (s1 == s2) {
        cout << "Both students have the same CGPA." << endl;
    } else {
        cout << "Students have different CGPAs." << endl;
    }

    if (s1 > s2) {
        cout << "Student 1 has the higher CGPA." << endl;
    } else if (s2 > s1) {
        cout << "Student 2 has the higher CGPA." << endl;
    } else {
        cout << "Both students have equal CGPA." << endl;
    }

    return 0;
}
