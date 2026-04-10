#include<iostream>
using namespace std;

void display(int &num){

    num = 215;
}

int main(){

  int num = 100;

  cout << "Num of Value : - " << num << endl;

  display (num);

  cout << "Num of Value : - " << num << endl;

    return 0;
}