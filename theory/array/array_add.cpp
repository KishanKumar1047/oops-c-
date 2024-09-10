// Q. add all elements of array
#include<iostream>
#include<string>

using namespace std ;

int main () {
	int sum = 0;
	int arr[5] = { 3 , 4 ,2 , 4 ,6} ;
	for(int i = 0 ;i< 5 ;i++ ) {
		sum = sum + arr[i] ;
	};
	cout<<sum ;
	
	return 0;
}
