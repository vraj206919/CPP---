#include <iostream>
using namespace std;

class Employee
{
private:
    string empName; 

public:
    void SetName1()
    {
        cout << "Enter First Name: ";
        cin >> empName;
    }

    void ShowName1()
    {
        cout << "\nEmployee Name: "
             << empName;
    }
};

class Manager : public Employee
{
protected:
    string mgrName; 

public:
    void SetName2()
    {
        cout << "Enter Second Name: ";
        cin >> mgrName;
    }

    void ShowName2()
    {
        cout << "\nManager Name : "
             << mgrName;
    }
};

class person : public Manager
{
protected:
    string pplName; 

public:
    void SetName3()
    {
        cout << "Enter Third Name: ";
        cin >> pplName;
    }

    void ShowName3()
    {
        cout << "\nOther Person Name  : " << pplName;
    }
};

int main()
{
    person obj;

    obj.SetName1();
    obj.SetName2();
    obj.SetName3();


    obj.ShowName1();
    obj.ShowName2();
    obj.ShowName3();

    return 0;
}