#include <iostream>
using namespace std;

class Rectangle
{
private:
    float length;
    float width;

public:

    Rectangle();

    Rectangle(float l, float w);

   
    ~Rectangle();

    float area();
    float perimeter();
};

Rectangle::Rectangle()
{
    length = 0;
    width = 0;
}

Rectangle::Rectangle(float l, float w)
{
    length = l;
    width = w;
}

Rectangle::~Rectangle()
{
    cout << "Destructor called." << endl;
}

float Rectangle::area()
{
    return length * width;
}

float Rectangle::perimeter()
{
    return 2 * (length + width);
}

int main()
{
    float l, w;

    cout << "Enter length: ";
    cin >> l;

    cout << "Enter width: ";
    cin >> w;

    Rectangle r(l, w);

    cout << "Area = " << r.area() << endl;
    cout << "Perimeter = " << r.perimeter() << endl;

    return 0;
}