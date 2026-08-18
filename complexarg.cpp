#include <iostream>
using namespace std;
class Complex
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
  Complex c1,c2;
   cout<<"enter first complex num(real and imag):";
   c1.input();
   cout<<"enter second complex num(real and imag):";
   c2.input();
    cout << "Addition: ";
    cout << c1.real + c2.real << "+" << c1.imag + c2.imag << "i";

    cout << "\nSubtraction: ";
    cout << c1.real - c2.real << "+" << c1.imag - c2.imag << "i";
}