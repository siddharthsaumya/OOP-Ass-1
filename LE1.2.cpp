#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

bool check(int a, int b)
        {
            return abs(a % 10) == abs(b % 10);
        }
string result(int a, int b)
        {
        	if(check(a,b)==0){
        		return "not ";
			}
			else return "";


        }
int main() 
{ int a,b;
	cout<<" Enter the two numbers you want to check for.\n  First : ";
cin>>a;
	cout<<"  Second : ";
cin>>b;
cout<<" Last digits of both the numbers are "<< result(a,b) <<"same.\n"<<endl;
return 0;
}
