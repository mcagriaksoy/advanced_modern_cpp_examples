// Mehmet Cagri Aksoy

#include <iostream>

// Class Shapes hold multiple circles and squares.
class Circle
{
public:
    int radius;
};

class Square
{
public:
    int side;
};

class Shapes : public Circle, public Square
{
public:
    int circles_radius()
    {
        return Circle::radius;
    }

    int squares_side()
    {
        return Square::side;
    }

    Shapes operator+(const Shapes &other)
    {
        Shapes result;
        result.radius = this->radius + other.radius;
        result.side = this->side + other.side;
        return result;
    }
};

/**
 * @brief This program demonstrates the usage of operator overloading in C++.
 *
 * The program defines a class named Shapes which has two member variables: radius and side.
 * The class also has two member functions: circles_radius() and squares_side().
 * The program creates two objects of the Shapes class and sets their member variables.
 * Then, it adds the two objects using the overloaded '+' operator and stores the result in a third object.
 * Finally, it prints the member variables of all three objects.
 *
 * @return int
 */
int main()
{

    Shapes shapes1;
    shapes1.radius = 10;
    shapes1.side = 20;

    Shapes shapes2;
    shapes2.radius = 20;
    shapes2.side = 30;

    Shapes shapes3 = shapes1 + shapes2;

    std::cout << "Shapes 1 radius: " << shapes1.circles_radius() << std::endl;
    std::cout << "Shapes 1 side: " << shapes1.squares_side() << std::endl;

    std::cout << "Shapes 2 radius: " << shapes2.circles_radius() << std::endl;
    std::cout << "Shapes 2 side: " << shapes2.squares_side() << std::endl;

    std::cout << "Shapes 3 radius: " << shapes3.circles_radius() << std::endl;
    std::cout << "Shapes 3 side: " << shapes3.squares_side() << std::endl;

    return 0;
}