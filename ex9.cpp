// Mehmet Cagri Aksoy
#include <iostream>

int vo()
{
    throw std::bad_alloc();
}

int main()
{
    vo();
}