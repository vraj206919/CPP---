#include <iostream>
using namespace std;
class A
{
protected:
    int a, b, c;   
};

class Y : public A
{
public:
    void setData()
    {
        cout << "Enter Three Numbers: ";
        cin >> a >> b >> c;
    }

    void getData()
    {
        int sum = (a*a*a) + (b*b*b) + (c*c*c);
        cout << "Sum of Cubes: " << sum;
    }
};

int main()
{
    Y obj;
    obj.setData();
    obj.getData();

    return 0;
}