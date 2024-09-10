#include<iostream>
#include<string>

using namespace std ;

int main () {
	int store ;
	int arr[5] = { 3 , 4 , 28 , 90,6} ;
	int n = sizeof(arr)/4 ;
	for (int i =0; i<n;i++) {
		cout<<arr[i]<<" " ;
	};
	cout<<endl;
	int  i = 0 , j = n - 1;
	while (i<j) {
		swap(arr[i] , arr[j]);
		i++ ;
		j-- ;
		};
	cout<<"Reverse order is :" <<endl;
		for (int i =0; i<n;i++) {
		cout<<arr[i]<<" " ;
	};
	return 0;
}
