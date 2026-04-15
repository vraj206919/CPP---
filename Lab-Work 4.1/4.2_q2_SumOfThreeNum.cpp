#include <iostream>
using namespace std;
class X {
protected:
    int a, b, c;
};

class Y : public X {
public:
    void input() {
        cout << "Enter three numbers: ";
        cin >> a >> b >> c;
    }
    void display() {
        int sum = a*a*a + b*b*b + c*c*c;
        cout << "Sum of cubes = " << sum;
    }   
};
int main() {
    Y obj;
    obj.input();
    obj.display();
    return 0;
}