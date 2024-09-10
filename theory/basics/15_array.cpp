// Arrays are used to store multiple values in a single variable

#include<iostream>
using namespace std;

int main () {
	string brothers[3] = {"Chandan" , "Kishan" , "Kundan"}; 
	brothers[1] = "Arjun" ;
	int i = 0;
	while (i<3) {
		cout << brothers[i] << "\n" ;
		i++ ;
	}
	cout << sizeof(brothers) ;
	
	return 0;
}
