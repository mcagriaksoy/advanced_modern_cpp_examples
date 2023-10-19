// Mehmet Cagri Aksoy - 2023

#include <iostream>
#include <string>

namespace std
{
    void exclaim(string &str)
    {
        for (auto &c : str)
        {
            if (ispunct(c))
            {
                c = '!';
            }
        }
    }
} // namespace std

int main()
{
    std::string str = "Hello, World.";
    std::exclaim(str);
    std::cout << str << std::endl;
    return 0;
}
