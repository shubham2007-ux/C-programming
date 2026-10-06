#include <iostream>
using namespace std;

class Employee {
public:
    virtual void calculateBonus() {
        cout << "Employee bonus calculation." << endl;
    }
};

class Manager :
 public Employee {
private:
    double salary = 60000;
public:
    void calculateBonus() override {
        double bonus = salary * 0.20; // 20% bonus
        cout << "Manager Bonus: " << bonus << endl;
    }
};

class Developer :
 public Employee {
private:
    double salary = 50000;
public:
    void calculateBonus() override {
        double bonus = salary * 0.10;
        cout << "Developer Bonus: " << bonus << endl;
    }
};

int main() 
{
    Employee* emp;
    Manager manager;
    Developer developer;

    emp = &manager;
    emp->calculateBonus();

    emp = &developer;
    emp->calculateBonus();

    return 0;
}