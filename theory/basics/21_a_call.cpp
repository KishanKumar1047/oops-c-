// call by value and call by reference
// for array - i is always call by reference
//
//#include<iostream>
//#include<string>
//using namespace std ;
//
//void fxn(int num) {
//	cout<<num<<endl;
//	num += 5;
//	cout<< num<<endl;
//};
//
//int main () {
//	int num = 10;
//	fxn(num) ;
//	cout<<num<<endl;
//	
//	return 0;
//}


// & call by reference


#include<iostream>
#include<string>
using namespace std ;
// call by refrence
void fxn(int &num) {
	cout<<num<<endl;
	num += 5;
	cout<< num<<endl;
};

int main () {
	int num = 10;
	fxn(num) ;
	cout<<num<<endl;
	
	return 0;
}
