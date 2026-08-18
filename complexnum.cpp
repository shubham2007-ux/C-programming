#include <iostream>
using namespace std;
class complex
{
    public:
    int real, imag;
    void input()
    {
        cin>>real>>imag;
        
    }
void display()
{
    cout<<real<<"+"<<imag<<"i";
}
};
int main()
{
    complex c1,c2,c3,c4,add,sub;
    cout<<"Enter first imag number:";
    cin>>c1.imag;
    cout<<"Enter first real number:";
    cin>>c2.real;
    cout<<"Enter second imag number:";
    cin>>c3.imag;
    cout<<"Enter second real number:";
    cin>>c4.real;
    add.real=c2.real+c4.real;
    add.imag=c1.imag+c3.imag;
    sub.real =c2.real-c4.real;
    sub.imag=c1.imag-c3.imag;   
    cout<<"Addition:";
    add.display();
    cout<<"\nSubtraction :";
    sub.display();

}