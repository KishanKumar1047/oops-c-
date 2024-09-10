#include<iostream>
#include<string>

using namespace std;

class CSE {
	public :
		string name ;
		string id ;
		void lab() ;
};

void CSE ::lab() {
		cout<<"present in lab on dated 26/7/24 ." ;
} 

int main () {
	CSE student ;
	student.name = " Arjun Kishan" ;
	student.id = "23bcs051" ;
	cout << "Student name "<<student.name<<" and i'xd "<<setw<<student.id<<" is " ;
	student.lab() ;
	
	return 0;
	
}

