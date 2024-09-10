// Q. count value greater than x.
#include<iostream>
#include<string>

using namespace std ;

int main () {
	int count = 0 ;
	int x;
	int arr[6] = { 3 , 4 ,278 , 90 ,6 ,7} ;
	cout<<"enter value of x :" ;
	cin>>x;
	for (int i = 0 ; i<6 ; i++) {
		if(arr[i]>x) {
			count += 1;
		}
	};
	cout <<"Number of elements greater than x is "<<count ;
	return 0;
	
}
