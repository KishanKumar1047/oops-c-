// recursion - factorial

//#include<iostream>
//using namespace std ;
//
//int fact(int n) {
//	if (n == 0 or n == 1){
//		return 1;
//	}
//	return n * fact(n - 1) ;
//}
//
//int main (){
//	
//	cout<< fact(5) ;
//	
//	return 0;
//}

// fib series 0 1 1 2...

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
	cout << fib(5) ;
	
	return 0;
}

 
