// Q. print maximum value out of given elements of array.
#include<iostream>
#include<string>

using namespace std ;

int main () {
	int store ;
	int arr[5] = { 3 , 4 ,278 , 490,6} ;
	store = arr[0] ;
	for (int i = 0 ; i<5 ; i++) {
		
		if (arr[i]> store) {
			store = arr[i] ;
		}
//		else {
//			continue;
//		}
	}
		cout<<store;
		return 0;
	}
	
	// Q.detect array is present or what.
#include<iostream>
#include<string>

using namespace std;
int main () {

	int x;
	int index;
	int arr[5] = { 3 , 4 ,278 , 490,6} ;
	cout<<"Enter element to check :" ;
	cin>>x ;
	for (int i = 0 ; i<5 ; i++) {
		
		if (arr[i] == x) {
			index = x;
			
		}
	}
	
    if (index == x) {
    	cout<<index ;
	}
	else {
			cout<<"Element is not present ";  
			
	}
		return 0;
	}

// another way

#include<iostream>
#include<string>

using namespace std;
int main () {
	int x;
	int index = -1;
	int arr[5] = { 3 , 4 ,278 , 490,6} ;
	cout<<"Enter element to check :" ;
	cin>>x ;
	for (int i = 0 ; i<5 ; i++) {	
		if (arr[i] == x) {
			index = x;
			break;		
		}
	}
	cout <<index<<endl;
		return 0;
	}
