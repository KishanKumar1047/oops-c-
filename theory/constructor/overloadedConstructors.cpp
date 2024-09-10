// program 6.2
#include <iostream>
using namespace std;

class sample
{
    float a; // Private member variable a
    float b; // Private member variable b
public:
    sample() { } // parameterized constructor declaartion
    sample(float m)
    {
        a = b = m;
    }
    sample(float real, float image)
    {
        a = real;
        b = image;
    }

    friend sample sum(sample s1, sample s2);
    friend void show(sample s);
};

sample sum (sample s1 , sample s2) {
    sample s3;
    s3.a = s1.a + s2.a ;
    s3.b = s1.b + s2.b ;
    return(s3);

}
void show(sample s) {
    cout<<s.a<<" + j"<<s.b<<endl;}


int main()
{
    sample A(2.3 , 5.7);
    sample B(2.9);
    sample C;
    C = sum(A , B);
    cout<<"A =";show(A);
    cout<<"B =";show(B);
    cout<<"C =";show(C);

    // another way exlicitly

    sample P , Q , R;
    P = sample(2.9 , 4.4);
    Q = sample(1.6 , 6.3);
    R = sum(P , Q);

    cout<<endl;
    cout<<"P =";show(P);
    cout<<"Q =";show(Q);
    cout<<"R =";show(R);




    return 0;
}
