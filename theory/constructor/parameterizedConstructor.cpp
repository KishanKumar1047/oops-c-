#include <iostream>
using namespace std;

class sample {
    int a;  // Private member variable a
    int b;  // Private member variable b
public:
    sample ( int x , int y) ; // parameterized constructor declaartion

    void display(void) {
        cout<<"a = "<<a<<endl;
        cout<<"b = "<<b<<endl;
    }

   
};

sample :: sample(int x , int y) { // constructor defined
    a = x;
    b = y;
}


int main() {
    sample obj(150 , 200); // constructor called implicitly
    cout<<"object1"<<endl;
    obj.display();

    sample obj2 = sample(50 , 30); // constructor called explicitly
    cout<<"object2"<<endl;
    obj2.display();

    return 0;
}
