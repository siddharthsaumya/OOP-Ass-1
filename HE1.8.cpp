#include <iostream>
#include <conio.h>
#include <cctype>
using namespace std;
class student{
	public:
		string name;
		int roll;
		int avg;
};
  student one[100];
  int n;
int main () 
{ int i,j;
system("cls");
 cout<<"Enter number of students you want to create database of : ";
 cin>>n;
 for(int i=0;i<n;i++){
 cout<<"Enter the data for student number "<<i+1<<endl;
    cout << "Enter Full name: ";
    cin>>one[i].name;	
    cout << "Enter roll: ";
    cin >> one[i].roll;
    cout << "Enter average marks: ";
    cin >> one[i].avg;
}

    struct student temp;
    
    for (i = 0; i < n; i++)
    {
        for (j = i+1; j < n; j++)
        {
            if (one[i].avg < one[j].avg )
            {
                temp = one[i];
                one[i] = one[j];
                one[j] = temp;
            } 
        }
    }
    system("cls");
    cout<<"Presenting the data: "<<endl;
    cout<<"\nROLL\tNAME\tAVERAGE\t\tRANK";
    cout<<"\n___________________________________";
        cout<<"\n___________________________________\n";
        for(i=0;i<n;i++){
        	   cout<<one[i].roll<<"\t"<<one[i].name<<"\t"<<one[i].avg<<"\t\t"<<i+1<<"\n";
		}

 return 0;}
