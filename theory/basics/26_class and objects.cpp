/*  Procedural programming is about writing procedures or functions that
 perform operations on the data,
 while object-oriented programming is about creating 
 objects that contain both data and functions. */
 
 // class for multiple objects
 
 #include<iostream>
 #include<string>
 
 using namespace  std ;
 
 class myclass {
 	public :
	 	string Name ; // attributes of class
	 	string ID ;
	 	string Section ; 
 }; 
 
 int main () {
 	
 	myclass S1 ;
 	S1.Name = "KISHAN KUMAR" ;
 	S1.ID = "23BCS051" ;
 	S1.Section = "F" ;
 		
 	myclass S2 ;
 	S2.Name = "ASHISH RANJAN" ;
 	S2.ID = "23BME025" ;
 	S2.Section = "B" ;
 	 		
 	myclass S3 ;
 	S3.Name = "SHIRSHAK MONDAL " ;
 	S3.ID = "23DEC022" ;
 	S3.Section = "D" ;
 	
 	cout <<"S1 name is : " << S1.Name << "\n ID Number is : " <<S1.ID<< "\n" << "Section is :"<<S1.Section << "\n" <<"\n" ;
	cout <<"S2 name is : " << S2.Name << "\n ID Number is : " <<S2.ID<< "\n" << "Section is :"<<S2.Section << "\n" <<"\n" ;
	cout <<"S3 name is : " << S3.Name << "\n ID Number is : " <<S3.ID <<"\n" << "Section is :"<<S3.Section << "\n" <<"\n" ;
 	
 	return 0;
 	
 	
 	
 }
