#include<iostream>
using namespace std;
class Gretest
{
    int a,b;
public:
  void accept()
  {
    cout<<"Enter the numbers :";  
    cin>>a>>b;  
  }
  void find()
  {
    if(a>b)
    cout<<"a is gretest number:"<<a;
    else
    cout<<"b is gretest number:"<<b;
  }
};
int main()
{
Gretest g;
g.accept();
g.find();
}