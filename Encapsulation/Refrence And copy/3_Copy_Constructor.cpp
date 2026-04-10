#include <iostream>
using namespace std;

class Copy {
public:
    int value;

    Copy(int v) {
        value = v;
    }
    Copy(const Copy &obj) {
        value = obj.value;
        cout << "Copy constructor :- " << endl;
    }
};

int main() {
    Copy num1(10);    
    Copy num2 = num1;  

    cout << "Value of 1: " << num1.value << endl;
    cout << "Value of 2: " << num2.value << endl;

    return 0;
}