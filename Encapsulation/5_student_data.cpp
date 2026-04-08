#include<iostream>
using namespace std;
class Student
{
private:
    int student_id;
    string student_name;
    string student_grade;
    string student_address;
    int student_age;
    string student_city;
    int student_mobile_number;
    string student_course;
    
    static int allStudent;
public:
    void setstudent()
    {
        cout << "Enter Student Id:\n";
        cin >> student_id;
        cin.ignore();

        cout << "Enter Student Name:\n";
        getline(cin, student_name);

        cout << "Enter Student Grade:\n";
        getline(cin, student_grade);

        cout << "Enter Student Address:\n";
        getline(cin, student_address);

        cout << "Enter Student Age:\n";
        cin >> student_age;
        cin.ignore();

        cout << "Enter Student City:\n";
        getline(cin, student_city);

        cout << "Enter Student Mobile Number:\n";
        cin >> student_mobile_number;
        cin.ignore();

        cout << "Enter Student Course:\n";
        getline(cin, student_course);

        allStudent++; // 
    }
    void getstudent()
    {
        cout << "Student Id: " << student_id << endl;
        cout << "Student Name: " << student_name << endl;
        cout << "Student Grade: " << student_grade << endl;
        cout << "Student Address: " << student_address << endl;
        cout << "Student Age: " << student_age << endl;
        cout << "Student City: " << student_city << endl;
        cout << "Student Mobile Number: " << student_mobile_number << endl;
        cout << "Student Course: " << student_course << endl;
    }

    static void displayallStudent()
    {
        cout << "Total number of students: " << allStudent << endl;
    }
};
int Student::allStudent = 0;

int main()
{
     int n;
    cout << "Enter the number of students: ";
    cin >> n;

    Student s[5];
    for(int i = 0; i < 5; i++)
    {
        cout << "\nEnter details of Student " << i + 1 << ":\n";
        s[i].setstudent();
    }
    for(int i = 0; i < 5; i++)
    {
        cout << "\nDetails of Student " << i + 1 << ":\n";
        s[i].getstudent();
    }
    Student::displayallStudent();
    return 0;
}