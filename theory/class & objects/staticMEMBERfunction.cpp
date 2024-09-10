#include <iostream>
using namespace std;

class item
{
        static int count; // this static variable 
        int code;

    public:
        void setdata(void)
        {

           code = ++count ;
        }
        void showcode (void) {
            cout<<"object number  : "<<code<<"\n";
        }

        static void showcount(void) // static member function
        {
            cout << "count is : "<< count<<endl;
            
        }
};

 // int item :: count ; // intialization and definition of static member variable with default value 0
int item :: count ; // intialising 

int main()
{
    
    item a, b;
    a.setdata(); 
    b.setdata();


    item ::showcount(); // accessing static function
    
    item c ;
    c.setdata();

    item ::showcount();

    a.showcode();
    b.showcode();
    c.showcode();


    return 0;
}


// #include <iostream>

// class MyClass {
// public:
//     static int myStaticVar;  // Declaration of a static member variable

//     static void myStaticMethod() {  // Definition of a static member function
//         std::cout << "Static method called. Value of myStaticVar: " << myStaticVar << std::endl;
//     }
// };

// // Definition and initialization of the static member variable
// int MyClass::myStaticVar = 0;

// int main() {
//     // Accessing the static variable and function using the class name
//     MyClass::myStaticVar = 5;
//     MyClass::myStaticMethod();

//     // Accessing static members through an object (less common)
//     MyClass obj;
//     obj.myStaticVar = 10;
//     obj.myStaticMethod();

//     return 0;
// }
