// Mehmet Cagri Aksoy
#include <iostream>

class Base
{
public:
    int val;
    Base(int val) : val{val} {}
    // If we define the print() function as virtual, we can access the print() function of the derived classes.
    virtual void print()
    {
        std::cout << "Base" << std::endl;
    }
};

class Child : public Base
{
public:
    Child(int val) : Base{val} {}
    void print() override
    {
        std::cout << "Child" << std::endl;
    }
};

class GrandChild : public Child
{
public:
    GrandChild(int val) : Child{val} {}
    void print() override
    {
        std::cout << "GrandChild" << std::endl;
    }
};

// When we pass Base class by reference we can access the print() function of the derived classes.
// But we need to sure that the base print() function is defined as virtual.
// Otherwise (if we pass by value) we can only access the print() function of the Base class.
// Whether we define base print() function as virtual or not, the result is the same.
void print_class(Base &base)
{
    base.print();
}

using namespace std;

int main()
{
    Base base(1);
    Child child(2);
    GrandChild grandchild(3);

    print_class(base);
    print_class(child);
    print_class(grandchild);
}