#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int rollNo;
    float gpa;

public:

    Student() : name(""), rollNo(0), gpa(0.0) {}


    Student(string n, int r, float g) {
        name = n;
        rollNo = r;
        gpa = g;
    }

    
    string getName() const { return name; }
    int getRollNo() const { return rollNo; }
    float getGPA() const { return gpa; }


    void display() const {
        cout << "Name: " << name
             << ", Roll No: " << rollNo
             << ", GPA: " << gpa << endl;
    }
};

class StudentRecordManager {
private:
    vector<Student> students;

public:
    void addStudent(const Student& s) {
        students.push_back(s);
    }

    void displayAll() const {
        if (students.empty()) {
            cout << "No records found.\n";
            return;
        }

        for (const Student& s : students) {
            s.display();
        }
    }

    void searchByRoll(int roll) const {
        for (const Student& s : students) {
            if (s.getRollNo() == roll) {
                cout << "Student Found:\n";
                s.display();
                return;
            }
        }
        cout << "Student not found.\n";
    }
};

int main() {
    StudentRecordManager manager;

    Student s1("Alibaba", 101, 3.5);
    Student s2("Sara Khan", 102, 3.8);
    Student s3("John Sina", 103, 3.2);

    manager.addStudent(s1);
    manager.addStudent(s2);
    manager.addStudent(s3);

    cout << "\nAll Student Records:\n";
    manager.displayAll();

    cout << "\nSearching for Roll No 102:\n";
    manager.searchByRoll(102);

    cout << "\nSearching for Roll No 999:\n";
    manager.searchByRoll(999);

    return 0;
}