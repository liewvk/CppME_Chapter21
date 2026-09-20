#include <iostream>
using namespace std;

class Employee
{
public:
    virtual void calculatePay()
    {
        cout << "Calculating generic employee pay." << endl;
    }
};

class FullTimeEmployee : public Employee
{
public:
    void calculatePay() override
    {
        cout << "Calculating full-time employee pay." << endl;
    }
};

class PartTimeEmployee : public Employee
{
public:
    void calculatePay() override
    {
        cout << "Calculating part-time employee pay." << endl;
    }
};

int main()
{
    Employee* ptr;

    FullTimeEmployee ft;
    PartTimeEmployee pt;

    ptr = &ft;
    ptr->calculatePay();

    ptr = &pt;
    ptr->calculatePay();

    return 0;
}
