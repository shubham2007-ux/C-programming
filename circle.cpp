#include<iostream>
using namespace std;
class Circle
{
 float radius;
public:
    void accept()
    {
        cout<<"Enter radius:";
        cin>>radius;
    }
    void calculate()
    {
        float area=3.14*radius*radius;
        float circumference=2*3.14*radius;
        cout<<"Area of circle:"<<area;
        cout<<"\nCircumference of circle:"<<circumference;
    }
};
int main()
{
    Circle c;
    c.accept();
    c.calculate();
}