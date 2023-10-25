// Mehmet Cagri Aksoy

#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

/**
 * Sorts and prints the given vector of integers in ascending order.
 *
 * @param numbers The vector of integers to be sorted and printed.
 */
void sort_and_print_vector(vector<int> numbers)
{
    sort(begin(numbers), end(numbers), [](int x, int y)
         { return (x < y); });

    for (auto number : numbers)
    {
        cout << number << ",";
    }
}

int main()
{
    vector<int> numbers = {3, 2, 5, 1, 4, 6, 7};
    sort_and_print_vector(numbers);
}
