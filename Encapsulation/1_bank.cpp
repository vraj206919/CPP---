#include<iostream>
using namespace std;

class Bankbalance
{
    private:
    int bankBalance = 50000;

    public:
    void getBankBalance()
    {
        cout << "Bank Balance : " << bankBalance << endl;
    }

    void setBankBalance(int bankBalance)
    {
        this->bankBalance += bankBalance;
    }

};

int main ()
{

    Bankbalance b1;
    int AddBalance;

cout << "Addbalance :" << endl;
cin >> AddBalance;



b1.setBankBalance(AddBalance);
b1.getBankBalance();

    return 0;
}
