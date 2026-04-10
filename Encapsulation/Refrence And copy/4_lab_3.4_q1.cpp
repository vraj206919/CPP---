#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int rollNumber;
    float gpa;

public:
    Student() {
        name = "";
        rollNumber = 0;
        gpa = 0.0;
    }

    Student(string n, int r, float g) {
        name = n;
        rollNumber = r;
        gpa = g;
    }

    Student(const Student &s) {
        name = s.name;
        rollNumber = s.rollNumber;
        gpa = s.gpa;
    }

    string getName() {
        return name;
    }

    int getRollNumber() {
        return rollNumber;
    }

    float getGPA() {
        return gpa;
    }
};

int main() {
    Student s1;
    Student s2("Ali", 101, 3.5);
    Student s3 = s2;

    cout << s2.getName() << " " << s2.getRollNumber() << " " << s2.getGPA() << endl;
    cout << s3.getName() << " " << s3.getRollNumber() << " " << s3.getGPA() << endl;

    return 0;
}