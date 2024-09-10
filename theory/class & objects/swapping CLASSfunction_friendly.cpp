// swapping classes values using friend function
#include <iostream>
using namespace std;

class class2;

class class1
{
    int a; // Private member variable a

public:
    void setvalue(int b)
    {
        a = b;
    }
    void display(void)
    {
        cout << a << endl;
    }

    friend void exchange(class1 &, class2 &); // Friend function declaration for swapping  both classes
};

class class2
{
    int m;

public:
    void setvalue(int b)
    {
        m = b;
    }
    void display(void)
    {
        cout << m << endl;
    }

    friend void exchange(class1 &, class2 &); // Friend function declaration for swapping  both classes
};

void exchange(class1 &x, class2 &y)
{
    int temp = x.a;
    x.a = y.m;
    y.m = temp;
}

int main()
{
    class1 c1;
    class2 c2;

    c1.setvalue(100);
    c2.setvalue(200);

    cout << "values before exchange :" << endl;

    c1.display();
    c2.display();

    exchange(c1, c2); // swapping
    cout << "values after exchange :" << endl;

    c1.display();
    c2.display();
    return 0;
}
