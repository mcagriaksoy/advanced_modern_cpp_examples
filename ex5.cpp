// Mehmet Cagri Aksoy

#include <deque>
#include <iostream>
#include <list>
#include <string>
#include <vector>

using namespace std;

int main()
{
    vector<string> vec_s;
    list<string> list_s;
    deque<string> deque_s;

    cout << "Enter a string: ";
    int count = 0;
    for (string word; cin >> word && count < 5; ++count)
    {
        vec_s.push_back(word);
        list_s.push_back(word);
        deque_s.push_front(word);
    }

    cout << "Vector: " << endl;
    for (auto &i : vec_s)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "List: " << endl;
    for (auto &i : list_s)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "Deque: " << endl;
    for (auto &i : deque_s)
    {
        cout << i << " ";
    }
    cout << endl;
}
