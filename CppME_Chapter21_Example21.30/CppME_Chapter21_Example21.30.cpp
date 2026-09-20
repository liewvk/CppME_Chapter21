#include <iostream>
using namespace std;

class Shape
{
public:
    virtual void draw()
    {
        cout << "Drawing a generic shape." << endl;
    }
};

class Triangle : public Shape
{
public:
    void draw() override
    {
        cout << "Drawing a triangle." << endl;
    }
};

class Square : public Shape
{
public:
    void draw() override
    {
        cout << "Drawing a square." << endl;
    }
};

int main()
{
    Shape* ptr;

    Triangle t;
    Square s;

    ptr = &t;
    ptr->draw();

    ptr = &s;
    ptr->draw();

    return 0;
}
