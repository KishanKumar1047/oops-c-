
#include<iostream>
using namespace std ;


int main () {
	int num1 , num2 ;
	char opt ;
	cout << " Enter first number :" ;
	cin >> num1 ;
	cout << "\n Enter second number :" ;
	cin >>num2 ;
	cout << "\n Enter operator like +,-,*./ : ";
	cin >> opt ;
	switch (opt) {
		case '+' :
			cout<< "Sum is : " << num1 + num2 ;
			break;
		case '-' :
			cout <<"Subtraction is : " << num1 - num2 ;
			break ;
		case '*' :
			cout << " multiply is : " << num1*num2 ;
			break ;
		case '/' :
			cout << "division is : " << num1/num2 ;
			break ;
			
		default :
			cout << "Invalid operator !" ;
			break ;
			
			
			
			
			
	}
	return 0;
	
}
