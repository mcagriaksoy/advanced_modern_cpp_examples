// Mehmet Cagri Aksoy

#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

/**
 * Calculates the minimum and maximum sums of a vector of integers.
 *
 * This function takes a vector of integers as input, and calculates the minimum and maximum sums of the vector. It does this by iterating over all possible combinations of four elements in the vector, and calculating the sum of each combination. It then updates the values of two variables passed by reference, `min_sum` and `max_sum`, with the minimum and maximum sums, respectively.
 *
 * @param arr A vector of integers.
 *
 * @note This function assumes that the input vector `arr` has at least four elements. If the vector has fewer than four elements, the behavior of the function is undefined.
 * @note This function modifies the values of the `min_sum` and `max_sum` variables passed by reference. Make sure to initialize these variables before calling the function.
 */
void miniMaxSum(vector<int> arr)
{
    vector<long> sum;
    for (int index = 0; index < arr.size(); index++)
    {
        long sum_tmp = 0;
        for (int i = 0; i < arr.size(); i++)
        {
            if (i != index)
            {
                sum_tmp += arr.at(i);
            }
        }
        sum.push_back(sum_tmp);
    }

    // @note long type is required in case of summed values are greater than 2^31 - 1.
    long sum_min = *min_element(sum.begin(), sum.end());
    long sum_max = *max_element(sum.begin(), sum.end());

    cout << sum_min << " " << sum_max << endl;
}

int main()
{
    // TEST CASE 1
    vector<int> a1 = {1, 2, 3, 4, 5};
    miniMaxSum(a1);

    // TEST CASE 2
    vector<int> arr = {793810624, 895642170, 685903712, 623789054, 468592370};
    miniMaxSum(arr);
    return 0;
}