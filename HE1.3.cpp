#include <string.h> 
#include <iostream> 
using namespace std; 
int main() 
{ 
	string str;
	cout<<"Input the string : ";
	cin>>str;
	string r = str.substr(str.length()-1); 
	cout << "\nString is: " << r<<str; 
	return 0; 
}

