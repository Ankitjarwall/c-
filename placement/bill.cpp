#include <iostream>

using namespace std;

class shape
{
public:
    void caculate();
};

class circle : public shape
{
public:
    float radius;

    void setCricle()
    {

        cout << "Enter the circle radius : ";
        cin >> radius;
    }
    void calculate(float radius)
    {
        cout << "The area of circle is : " << radius * radius;
    }
};

class triangle : public shape
{
public:
    float length;
    float breath;
    float height;

    void setTriangle()
    {

        cout << "Enter the Triangle length : ";
        cin >> length;
        cout << "Enter the Triangle length : ";
        cin >> breath;
        cout << "Enter the Triangle length : ";
        cin >> height;
    }

    void calculate(float l, float b, float h)
    {
        cout << "The area of triangle is : " << l * b * h;
    }
};

class rectangle : public shape
{
public:
    float length;
    float breath;

    void setTriangle()
    {

        cout << "Enter the Rectangle length : ";
        cin >> length;
        cout << "Enter the Rectangle length : ";
        cin >> breath;
    }
    void calculate(float l, float b)
    {
        cout << "The area of ractangle is : " << l * b;
    }
};

int main()
{
    shape *p;
    circle c_cal;
    rectangle r_cal;
    triangle t_cal;
    p = &c_cal;
    p = &t_cal;
    p = &r_cal;

    c_cal.radius();
    t_cal.setTriangle();
    r_cal.setTriangle();
    return 0;
}
