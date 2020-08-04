#include <iostream>
#include <conio.h>
#include <cctype>
using namespace std;
class emp{
	public:
		string name;
		int id;
		string dob;
		int bs;
};
  emp one[100];
  int n;
    
  
int main () 
{ int i,j;
system("cls");
 cout<<"Enter number of employees you want to create database of : ";
 cin>>n;
 for(int i=0;i<n;i++){
 cout<<"Enter the data for employee number "<<i+1<<endl;
   cout << "Enter the ID: ";
    cin >> one[i].id;
    cout << "Enter Full name: ";
    cin>>one[i].name;	
    cout << "Enter DOB as 14-08-2000: ";
    cin >> one[i].dob;
    cout << "Enter the Basic Salary: ";
    cin >> one[i].bs;
}

    struct emp temp;
    
    for (i = 0; i < n; i++)
    {
        for (j = i+1; j < n; j++)
        {
            if (one[i].bs < one[j].bs )
            {
                temp = one[i];
                one[i] = one[j];
                one[j] = temp;
            } 
        }
    }
    system("cls");
    cout<<"Presenting the data: "<<endl;
    cout<<"\nID\tNAME\t\tDOB\t\tBasic Salary";
    cout<<"\n___________________________________________________";
        cout<<"\n___________________________________________________\n";
        for(i=0;i<n;i++){
        	   cout<<one[i].id<<"\t"<<one[i].name<<"\t\t"<<one[i].dob<<"\t"<<one[i].bs<<"\n";
		}

 return 0;}
