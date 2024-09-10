// program 6.3

// Long-term fixed deposit system
#include <iostream>
using namespace std;

class Fixed_deposit
{
    long int P_amount;  // Principal amount
    int Years;          // Period of investment
    float Rate;         // Interest rate
    float R_value;      // Return value of amount
public:
    Fixed_deposit() {}  // Default constructor
    Fixed_deposit(long int p, int y, float r = 0.12);  // Constructor with default rate
    Fixed_deposit(long int p, int y, int r);           // Constructor with integer rate
    void display(void);
};

Fixed_deposit::Fixed_deposit(long int p, int y, float r)
{
    P_amount = p;
    Years = y;
    Rate = r;
    R_value = P_amount;
    
    for(int i = 1; i <= y; i++)
        R_value = R_value * (1.0 + r);
}

Fixed_deposit::Fixed_deposit(long int p, int y, int r)
{
    P_amount = p;
    Years = y;
    Rate = r;
    R_value = P_amount;
    
    for(int i = 1; i <= y; i++)
        R_value = R_value * (1.0 + float(r)/100);
}

void Fixed_deposit::display(void)
{
    cout << "\n"
         << "Principal Amount = " << P_amount << "\n"
         << "Return Value = " << R_value << "\n";
}

int main()
{
    Fixed_deposit FD1, FD2, FD3;  // Deposits created
    long int p;                   // Principal amount
    int y;                        // Investment period (years)
    float r;                      // Interest rate, decimal form
    int R;                        // Interest rate, percent form

    cout << "Enter amount, period, interest rate (in percent):\n";
    cin >> p >> y >> R;
    FD1 = Fixed_deposit(p, y, R);

    cout << "Enter amount, period, interest rate (decimal form):\n";
    cin >> p >> y >> r;
    FD2 = Fixed_deposit(p, y, r);

    cout << "Enter amount, period:\n";
    cin >> p >> y;
    FD2 = Fixed_deposit(p, y);

    cout<<"Deposit _1"<<endl;
    FD1.display();
    
    cout<<"Deposit _2"<<endl;
    FD2.display();
    
    cout<<"Deposit _3"<<endl;
    FD3.display();
    

    return 0;
}
