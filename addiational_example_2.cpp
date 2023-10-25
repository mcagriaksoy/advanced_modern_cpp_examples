// Mehmet Cagri Aksoy - 2023

#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <vector>
using namespace std;

class A
{
public:
    A()
    {
        callA = 0;
    }

private:
    int callA;
    void inc()
    {
        callA++;
    }

protected:
    void func(int &a)
    {
        a = a * 2;
        inc();
    }

public:
    int getA()
    {
        return callA;
    }
};

class B
{
public:
    B()
    {
        callB = 0;
    }

private:
    int callB;
    void inc()
    {
        callB++;
    }

protected:
    void func(int &a)
    {
        a = a * 3;
        inc();
    }

public:
    int getB()
    {
        return callB;
    }
};

class C
{
public:
    C()
    {
        callC = 0;
    }

private:
    int callC;
    void inc()
    {
        callC++;
    }

protected:
    void func(int &a)
    {
        a = a * 5;
        inc();
    }

public:
    int getC()
    {
        return callC;
    }
};

class D : public A, public B, public C
/**
 * @brief Class D with a private integer value and a public function to update the value.
 * The update_val function takes an integer as input and updates the value according to the following rules:
 * If the input is divisible by 2, the A::func function is called with the current value.
 * If the input is divisible by 3, the B::func function is called with the current value.
 * If the input is divisible by 5, the C::func function is called with the current value.
 * The function continues to divide the input by 2, 3, and 5 until it is no longer divisible by them.
 * Finally, the function prints the updated value and the number of times each of the A::func, B::func, and C::func functions were called.
 */
{
private:
    int val;

public:
    // Initially val is 1
    D() : val{1}
    {
    }

    // Implement this function
    void update_val(int new_val)
    {
        int tmp = new_val;

        while (tmp > 1)
        {
            if (tmp % 5 == 0)
            {
                tmp /= 5;
                C::func(val);
            }

            if (tmp % 3 == 0)
            {
                tmp /= 3;
                B::func(val);
            }

            if (tmp % 2 == 0)
            {
                tmp /= 2;
                A::func(val);
            }
        }

        cout << "Value = " << val << endl;
        cout << "A's func called " << A::getA() << " times" << endl;
        cout << "B's func called " << B::getB() << " times" << endl;
        cout << "C's func called " << C::getC() << " times" << endl;
    }
};

int main()
{
    D d;
    int incoming_value;
    cin >> incoming_value;
    d.update_val(incoming_value);
    return 0;
}
