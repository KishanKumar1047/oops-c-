#include<iostream>

using namespace std ;

int main () {
	
	string food = "PIZZA" ;
	string &meal = food ;
	
	
	cout << food <<"\n" ;
	cout << meal <<"\n" ;
	cout << &food <<"\n" ;  // memory address of food variable
	cout << &meal ;
	
	return 0;
}
