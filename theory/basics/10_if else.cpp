#include<iostream>
using namespace std ;


int main () {
	
	int yourage ;
	cout<< " Enter your age :" ;
	cin>> yourage ;
	if (yourage == 18) {
		cout<< " you are just eligible to vote." ;
		
	} else if (yourage > 18) {
		cout<< " you are ready to vote" ;
	} else {
		cout << " not eligible to vote" ;
	}
	return 0;
}

#include<iostream>
using namespace std ;


int main () {
	// short hand if else
   // variable = (condition) ? expressionTrue : expressionFalse;
   
   int time = 2 ;
   string result = (time > 18) ? "you r right" : "wrong" ;
   cout <<result ;
   return 0;
}
