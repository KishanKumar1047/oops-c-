 // A pointer however, is a variable that stores the memory address as its value.  
 #include<iostream>

using namespace std ;

int main () {
	
	string food = "pizza" ;
	string* ptr = &food ;
	
	cout << food << "\n" ;
	cout << &food << "\n" ;
	cout << ptr << "\n" ; // value of memory address of variable
	cout << *ptr << "\n" ; // derefrence operator - value of that variable
	
	*ptr = "Burger" ;
	cout << *ptr << "\n" ; // modifying pointer value
	cout << food ;
	
	
	
	return 0;
	
}
