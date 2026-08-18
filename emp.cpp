#include<iostream>
using namespace std;
class Employee
{
    int id;
    char name;
    double salary;
public:
  void accept()
  {
    cout<<"Enter id:";
    cin>>id;
    cout<<"Enter name:";
    cin>>name;
    cout<<"Enter salary:";
    cin>>salary;
  }
  void display ()
  {
  cout<<"\nid"<<id;
   cout<<"\nname"<<name;
    cout<<"\nsalary"<<salary;
  }
};
  int main()
  {
    Employee e;
    e.accept();
    e.display();
  }

