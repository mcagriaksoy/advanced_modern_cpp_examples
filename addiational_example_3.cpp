// Mehmet Cagri Aksoy

#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <vector>

using namespace std;

class Matrix
{
public:
    int arr_len_x;
    int arr_len_y;
    vector<int> arr1;
    vector<int> arr2;
};

vector<int> operator+(const vector<int> &arr1, const vector<int> &arr2)
{
    vector<int> result;
    for (int i = 0; i < arr1.size(); i++)
    {
        result.push_back(arr1[i] + arr2[i]);
    }
    return result;
}

/**
 * @brief Main function that reads matrices from input and prints their sum.
 *
 * @return int
 */
int main()
{
    int T;
    cin >> T;
    Matrix m[T] = {};
    for (int i = 0; i < T; i++)
    {
        cin >> m[i].arr_len_x;
        cin >> m[i].arr_len_y;

        // ARR1
        for (int j = 0; j < m[i].arr_len_x * m[i].arr_len_y; j++)
        {
            int tmp;
            cin >> tmp;
            m[i].arr1.push_back(tmp);
        }

        // ARR2
        for (int j = 0; j < m[i].arr_len_x * m[i].arr_len_y; j++)
        {
            int tmp;
            cin >> tmp;
            m[i].arr2.push_back(tmp);
        }

        // PRINT RESULT
        auto sum = m[i].arr1 + m[i].arr2;
        for (int k = 0; k < m[i].arr_len_x * m[i].arr_len_y; k++)
        {
            if (k != 0 && (k % m[i].arr_len_x == 0))
            {
                cout << endl;
            }
            cout << sum.at(k) << " ";
        }
        cout << endl;
    }

    return 0;
}
