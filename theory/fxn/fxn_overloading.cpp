// function overloading

#include<iostream>
using namespace std ;

int add(int a , int b) {
	return a + b ;// fxn 1 
}

int add(int a , int b , int c) {
	return a + b + c ; // fxn with same number
}

int main () {
	cout<<"sum is : "<<add(3,4)<<endl;
	cout<<"sum is : "<<add(3,9,5);
}
