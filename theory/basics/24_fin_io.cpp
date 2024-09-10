#include<iostream>
using namespace std ;

int fib(int n) {
	if (n<= 0) {
		cout <<"invalid input" ;
	} else if (n == 1) {
		return 0;
	} else if (n == 2 or n == 3) {
		return 1 ;
	} else {
		return fib(n - 1) + fib (n - 2) ;
	}
}

int main () {
	int n ;
	cout << "enter the term number ";
	cin>> n ;
	cout << fib(n) ;
	
	return 0;
}
