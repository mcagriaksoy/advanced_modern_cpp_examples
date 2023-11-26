// Mehmet Cagri Aksoy

#include <iostream>
#include <map>

using namespace std;

template <typename K, typename V>
class interval_map
{
    friend void IntervalMapTest();
    V m_valBegin;
    std::map<K, V> m_map;

public:
    // constructor associates whole range of K with val
    interval_map(V const &val)
        : m_valBegin(val)
    {
    }

    // Assign value val to interval [keyBegin, keyEnd).
    // Overwrite previous values in this interval.
    // Conforming to the C++ Standard Library conventions, the interval
    // includes keyBegin, but excludes keyEnd.
    void assign(K const &keyBegin, K const &keyEnd, V const &val)
    {
        // If !( keyBegin < keyEnd ), this designates an empty interval,
        // and assign must do nothing.
        if (keyBegin >= keyEnd)
        {
            return;
        }

        // The member interval_map<K,V>::m_valBegin holds the value that is associated
        // with all keys less than the first key in m_map.
        m_map[keyBegin] = val;
        if (m_valBegin > val)
        {
            m_valBegin = val;
        }

        auto itr = m_map.lower_bound(keyBegin);
        while (itr != m_map.end() && itr->first < keyEnd)
        {
            if (itr->second != val)
            {
                itr = m_map.emplace_hint(itr, keyEnd, val);
            }
            else
            {
                ++itr;
            }
        }
        return;
    }

    // look-up of the value associated with key
    V const &operator[](K const &key) const
    {
        auto it = m_map.upper_bound(key);
        if (it == m_map.begin())
        {
            return m_valBegin;
        }
        else
        {
            return (--it)->second;
        }
    }
};

// Many solutions we receive are incorrect. Consider using a randomized test
// to discover the cases that your implementation does not handle correctly.
// We recommend to implement a test function that tests the functionality of
// the interval_map, for example using a map of int intervals to char.

class IntervalMapTest
{
public:
    interval_map<int, char> M{'D'};

    IntervalMapTest()
    {
        M.assign(0, 5, 'D');
        M.assign(4, 15, 'B');
        M.assign(10, 20, 'C');
        M.assign(20, 21, 'X');
        M.assign(21, 22, 'Y');
        M.assign(22, 23, 'Z');
    };

    void print()
    {
        for (int i = -2; i < 25; i++)
        {
            cout << i << " " << M[i] << endl;
        }
    }
};

class IntervalMapTest2
{
public:
    interval_map<int, int> M{9};

    IntervalMapTest2()
    {
        M.assign(0, 5, 10);
        M.assign(4, 15, 20);
        M.assign(10, 20, 30);
        M.assign(20, 21, 5);
    };

    void print()
    {
        for (int i = -2; i < 25; i++)
        {
            cout << i << " " << M[i] << endl;
        }
    }
};

int main()
{
    IntervalMapTest();
    IntervalMapTest2();

    IntervalMapTest2().print();
    return 0;
}