// returning objects

#include <iostream>
using namespace std;

class complex {
    float x;
    float y;
public:
    void input(float real , float imag) {
        x = real ;
        y = imag ;
    }
    
   friend complex sum(complex , complex) ; // object as fxn arguments .

   void show(complex);
};

complex sum(complex c1 , complex c2) {
    complex c3 ; // declaring object 3rd
    c3.x = c1.x + c2.x ;
    c3.y = c1.y + c2.y ;
    return(c3); // returning object 3rd

}
    
void complex :: show(complex c) {
    cout<<c.x<<" + j"<<c.y<<endl;
}

int main() {
   complex A , B , C ;
   A.input(3.1 ,5.8);
   B.input(6.6 ,2.7);

    C = sum(A , B);

    cout<<"A = ";A.show(A);
    cout<<"B = ";B.show(B);
    cout<<"C = ";C.show(C);
    return 0;
}
