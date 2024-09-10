// files in c++ 
/* ofstream -	Creates and writes to files
ifstream - 	Reads from files
fstream -	A combination of ofstream and ifstream: creates, reads, and writes to files */

// CREATE AND WRITE FILE

#include<iostream>
#include<fstream> // header for file
 
using namespace  std ;
int main () {
	
	ofstream myfile("filename.txt") ;
	
	myfile<<"writing in file" ;
	
	myfile.close() ;
	return 0;
}

