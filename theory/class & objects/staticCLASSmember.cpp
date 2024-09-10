#include <iostream>
#include <string>
using namespace std;

class item
{
        static int count; // this static variable is intialized with 0 value
        int number;

    public:
        void setdata(int a)
        {

            number = a;
            count++;
        }

        void getdata()
        {
            cout << "count is : ";
            cout << count<<endl;
        }
};

 // int item :: count ; // intialization and definition of static member variable with default value 0
int item :: count = 20; // intialising with value 20

int main()
{
    
    item a, b;
    a.getdata(); // will give intialized value of count
    b.getdata();

    a.setdata(24);
    b.setdata(345);

    a.getdata(); // will give updated value
    b.getdata();

    return 0;
}



