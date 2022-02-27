#include <iostream>
using namespace std;

class Shape
{
public:
    virtual void Draw() = 0;
};

class Rectangle: public Shape
{
public:

    void Draw()
    {
        cout << "Rectangle" <<  endl;
    }
};

class Circle: public Shape
{
public:
    void Draw()
    {
        cout <<  "Circle" <<  endl;
    }
};

int main()
{
	Shape B;
    Rectangle R;
    Circle C;

    R.Draw();
    C.Draw();

    return 0;
}
