// Given an array of size N, find the majority element. The majority element is the element that appears more than floor(N/2) times.
// You may assume that the array is non - empty and the majority element always exist in the array.

#include <iostream>
#include <map>
#include <vector>

using namespace std;

class Solution
{
public:
    int majorityElement(const vector<int> &A)
    {

        map<int, int> m;
        // copy vector elements to the map and count the number of occurrences
        for (auto i : A)
        {
            m[i]++;
        }

        // find the element with the highest number of occurrences
        int max = 0;
        int max_element = 0;
        for (auto i : m)
        {
            if (max < i.second)
            {
                max = i.second;
                max_element = i.first;
            }
        }

        return max_element;
    }
};

int main()
{
    vector<int> a = {1, 9, 3, 4, 5, 9, 9, 8};
    Solution s;
    cout << "Majority element: " << s.majorityElement(a) << endl;
    return 0;
}