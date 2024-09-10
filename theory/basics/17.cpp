#include<iostream>
#include<string>

using namespace std ;

 // named strcuture :- By giving a name to the structure, you can treat it as a data type.
// This means that you can create variables with this structure anywhere in the program at any time.
 // creating named structure ;
struct car {
	string brand ;
	string model ;
	int year;
};

int main () {
	// create a car strucure and store it in mycar1 
	car mycar1 ;
	mycar1.brand = "Maruti" ;
	mycar1.model = "WagonR" ;
	mycar1.year = 1998 ;
	
		// create a car strucure and store it in mycar1 
	car mycar2 ;
	mycar2.brand = "Suzuki" ;
	mycar2.model = "Sumo" ;
	mycar2.year = 2000 ;
	
	cout << "Mycar1 is of brand " << mycar1.brand << " and model is " << mycar1.model << " is of year " << mycar1.year << ".\n" ;
	cout << "Mycar2 is of brand " << mycar2.brand << " and model is " << mycar2.model << " is of year " << mycar2.year << "." ;
	
	return 0;
	
	
}

	
