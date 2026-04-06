
#include<iostream>
using namespace std;

class Student {

  public : 

  string name;

  string company;

  string location;


  void ManagerDetail(string n, string c, string l){

    name = n;

    company = c;

    location = l;
  }

  void Managercheck(){

    cout << "\nEmployer name is a " << name;

    cout << "\nEmployer's company is the " << company;

    cout << "\nEmployer's location is a " << location;
  }

};

int main(){


  Student s1;

  s1.ManagerDetail("MIT","OFIICE No : - 302","PENTED");
  s1.Managercheck();


  return 0;
}