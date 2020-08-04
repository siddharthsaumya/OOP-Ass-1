#include <iostream>
#include <conio.h>
#include <cctype>
using namespace std;
class student{
	public:
		string name;
		int roll;
		int marks[5];
};
string subject(int i){
	if(i==0) return "OOP";
else if(i==1) return "DSA";
else if(i==2) return "DCE";
else if(i==3) return "ECO";
else if(i==4) return "SD";
else {
	system("cls");
	cout<<"ERROR"<<endl;
}
    }
int main () 
{ 
string err="Oops you did a mistake! Try again from start.";
system("cls");
 student one;
    cout << "Enter Full name: ";
    cin>>one.name;	
    cout << "Enter roll: ";
    cin >> one.roll;
 cout << "\n";
    for(int i=0;i<5;i++ ){
    	cout<<"Enter the number of marks scored in subject [ "<<subject(i)<<" ] : ";
    	cin >> one.marks[i];
}
    cout << "\nDisplaying Information: " <<endl;
    cout << "Name: " << one.name <<endl;
    cout <<"Age: " << one.roll <<endl;
     for(int i=0;i<5;i++ ){
     	subject(i);
    	    cout << "Marks scored in [ "<<subject(i)<<" ]: "<< one.marks[i]<<endl;	    
    	}
    return 0;
}

