// Polymorphism 
// Compile Time -> 1.Function Overloading , 2.Operator Overloading  
// RunTime -> Virtutal Keyword
#include <iostream>
using namespace std;
// Function Overloading
class Area
{
public:
    int calculateArea(int r) // Circle
    {
        return 3.14 * r * r;
    }

    int calculateArea(int l, int b) // Rectangle
    {
        return l * b;
    }
};

// Operator Overloading
class Complex
{
    int real, img;

public:
    Complex() {}
    Complex(int real, int img)
    {
        this->real = real;
        this->img = img;
    }

    void display()
    {
        cout << real << "+i" << img << endl;
    }

    Complex operator+(Complex &c)
    {
        Complex ans;
        ans.real = real + c.real;
        ans.img = img + c.img;
        return ans;
    }
};

int main()
{
    // Area a1,a2;
    // cout<<a1.calculateArea(7)<<endl;
    // cout<<a1.calculateArea(7,5)<<endl;

    Complex c1(3, 4);
    Complex c2(4, 6);
    Complex c3 = c1 + c2;
    c3.display();
    return 0;
}