// 5.2 nesting member functions // chapter 5 and objects

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class set
{
    int m, n;

public:
    void display(void);
    void input(void);
    int largest(void);
};

void set ::input(void)
{
    cout << "enter values of m and n " << endl;
    cin >> m >> n;
}

int set ::largest(void)
{
    if (m >= n)
        return m;
    else
        n;
}

void set ::display(void)
{
    cout << "largest value " << largest() << endl; // nesting member function in another member funcitons
}

int main()
{
    set obj;
    obj.input();
    obj.display();
    return 0;
}