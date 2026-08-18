#include <iostream>
using namespace std;

class Fraction
{
public:
    int a, b;

    void input()
    {
        cin >> a >> b;
    }

    void add(Fraction f)
    {
        int x = a * f.b + f.a * b;
        int y = b * f.b;

        cout << "Addition = " << x << "/" << y << endl;
    }

    void sub(Fraction f)
    {
        int x = a * f.b - f.a * b;
        int y = b * f.b;

        cout << "Subtraction = " << x << "/" << y << endl;
    }
};

int main()
{
    Fraction f1, f2;

    cout << "Enter a b: ";
    f1.input();

    cout << "Enter c d: ";
    f2.input();

    f1.add(f2);
    f1.sub(f2);

    return 0;
}