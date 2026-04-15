#include <iostream>
using namespace std;

class Worker {
public:
    void doWork() {
        cout << "Don't Copy My Code" << endl;
    }
};

class TeamLeader : public Worker {
};

class Boss : public Worker {
};

int main() {
    TeamLeader t;
    Boss b;

    t.doWork();
    b.doWork();
}