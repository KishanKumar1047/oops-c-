#include <iostream>
using namespace std;

class sample {
    int a;  // Private member variable a
    int b;  // Private member variable b
public:
    void setvalue() {  // Public member function to set the values of a and b
        a = 25;
        b = 40;
    }

    friend float mean(sample s);  // Friend function declaration
};

// Friend function definition to calculate the mean of the private members a and b
float mean(sample s) {
    return float(s.a + s.b) / 2.0;
}

int main() {
    sample X;  // Create an object X of class sample
    X.setvalue();  // Set the values of a and b using setvalue()

    // Calculate and display the mean value using the friend function
    cout << "Mean value = " << mean(X) << "\n";

    return 0;
}
