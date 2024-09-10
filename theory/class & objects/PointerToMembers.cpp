// address of members of class can be given to pointers

#include <iostream>
using namespace std;

class M
{
    int x;
    int y;

public:
    void set_xy(int a, int b)
    {
        x = a;
        y = b;
    }

    friend int sum(M m);
};

int sum(M m)
{
    int M::*px = &M::x;
    int M::*py = &M::y;
    M *pm = &m;
    int S = m.*px + pm->*py;
    return S;
}

int main()
{
    M n;
    void (M::*pf)(int, int) = &M::set_xy;
    (n.*pf)(10, 20);
    cout << "SUM = " << sum(n) << "\n";

    M *op = &n;
    (op->*pf)(30, 40);
    cout << "SUM = " << sum(n) << "\n";

    return 0;
}

// Class M:

// Contains two integer members x and y.
// A public member function set_xy(int a, int b) sets the values of x and y.
// A friend function sum(M m) is declared, allowing it access to private members x and y.
// Friend Function sum(M m):

// This function calculates the sum of x and y for an object of class M.
// Pointers px and py are used to point to the member variables x and y, respectively.
// Pointer pm points to the object m.
// The sum of *px (which is m.x) and *py (which is m.y) is stored in S and returned.
// main() Function:

// An object n of class M is created.
// A member function pointer pf is used to point to set_xy and is invoked to set the values of n.x and n.y to 10 and 20, respectively.
// The sum function is called to calculate the sum of n.x and n.y, which is then printed.
// Another member function pointer op is used to point to n, and the set_xy function is invoked again to set the values to 30 and 40. The sum function is called again, and the result is printed.