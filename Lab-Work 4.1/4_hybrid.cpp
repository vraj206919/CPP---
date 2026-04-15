#include <iostream>
using namespace std;

class Male {
public:
    void showMale() {
        cout << "Male Is Male" << endl;
    }
};

class Worker : public Male {
};

class Staff : public Male {
};

class Assistant : public Worker, public Staff {
};

int main() {
    Assistant obj;
    obj.Worker::showMale();
    obj.Staff::showMale();
}