#include <iostream>
using namespace std;

class Shape {
public:
    virtual void area() 
    {
        cout << "Calculating area of a shape." << endl;
    }
};

class Rectangle :
 public Shape
 {
private:
    int length = 5;
    int breadth = 4;

public:
    void area() 
    override {
        int rect_area = length * breadth;
        cout << "Area of Rectangle: " << rect_area << endl;
    }
};

class Square :
 public Shape
  {
private:
    int side = 4;

public:
    void area()
     override 
     {
        int sq_area = side * side;
        cout << "Area of Square: " << sq_area << endl;
    }
};

int main() 
{
    Shape* shapePtr;
    Rectangle rect;
    Square sq;

    shapePtr = &rect;
    shapePtr->area(); 

    shapePtr = &sq;
    shapePtr->area(); 

    return 0;
}