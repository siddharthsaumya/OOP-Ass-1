#include <iostream>
#include <conio.h>
#include <cctype>
using namespace std;

//***********************************
class student{
	public:
		string name;
		int roll;
		int marks[5];
};
  student one[100];
//*******************************
  
string subject(int j){
	if(j==0) return "OOP";
else if(j==1) return "DSA";
else if(j==2) return "DCE";
else if(j==3) return "ECO";
else if(j==4) return "SD";
else {
	system("cls");
	cout<<"ERROR"<<endl;
}
    } 
    
//**********************************
    
int sum(int i){
int sm=0;
for(int j=0;j<5;j++){
sm = one[i].marks[j]+ sm;
}
return sm;
}

//**********************************
int perc(int i){
int per=0;
per = i/5;
return per;
}
//**********************************

int main () 
{ int n,ch,roll,lw,hi,temp,i,j;
system("cls");
 cout<<"Enter number of students you want to create database of : ";
 cin>>n;
 for(int i=0;i<n;i++){
 cout<<"Enter the data for student number "<<i+1<<endl;
    cout << "Enter Full name: ";
    cin>>one[i].name;	
    cout << "Enter roll: ";
    cin >> one[i].roll;
    int j=0;
    for(int j=0;j<5;j++ ){
    	cout<<"Enter the number of marks scored in subject [ "<<subject(j)<<" ] out of 100 : ";
    	cin >> one[i].marks[j];
}
 }
 abc:
system("cls");
 cout<<"Enter the way to want to search for student\n Enter 1 for Roll number\n Enter 2 for PercentRoll\n Enter 3 for sorting done by marks\n -->  ";
 cin>>ch;
 if(ch == 1){
 	cout<<"\n Enter the roll number you want to search for : ";
 	cin>>roll;
 	int i=0;
 	while(roll == one[i].roll){
 		
 		
    cout << "\nName: " << one[i].name <<endl;
    cout <<"Roll: " << one[i].roll <<endl;
        int j=0;
     for(int j=0;j<5;j++ ){

    	    cout << "Marks scored in [ "<<subject(j)<<" ] out of 100 : "<< one[i].marks[j]<<endl;	    
    	}
		cout<<"Total marks scored out of 500 will be "<<sum(i)<<".\n"<<endl;
				cout<<"PercentRoll scored by "<< one[i].name <<" is "<<perc(sum(i))<<"% \n"<<endl;
		 
		 i++;
		 
		 
	 }
 }
 else if(ch ==2){
 	
 	cout<<"\n Enter the range of percentRoll you want ot sort people from:\n Enter lower range: ";
 	cin>>lw;
 	cout<<" Enter higher range: ";
 	cin>>hi;
 	int i=0;
 	while(i<n){
 		if(perc(sum(i))>=lw && perc(sum(i))<=hi){
 			
 			
 			 cout << "\nName: " << one[i].name <<endl;
    cout <<"Roll: " << one[i].roll <<endl;
        int j=0;
     for(int j=0;j<5;j++ ){

    	    cout << "Marks scored in [ "<<subject(j)<<" ] out of 100 : "<< one[i].marks[j]<<endl;	    
    	}
		cout<<"Total marks scored out of 500 will be "<<sum(i)<<".\n"<<endl;
				cout<<"PercentRoll scored by "<< one[i].name <<" is "<<perc(sum(i))<<"% \n"<<endl;
		
		
		 }
		 
		 
		 i++;
 		
	 }
 	
 }
 else if(ch == 3){
 	

    struct student temp;
    
    for (i = 0; i < n; i++)
    {
        for (j = i+1; j < n; j++)
        {
            if (sum(i) > sum(j))
            {
                temp = one[i];
                one[i] = one[j];
                one[j] = temp;
            } 
        }
    }
    
    cout<<"\n\nRollno\tName\tMarks\tPercentage\n\n";
    for (i = 0; i < n; i++)
    {
        cout<<one[i].roll<<"\t"<<one[i].name<<"\t"<< sum(i)<<"\t"<<perc(sum(i))<<"%\n";
    } 
    

 
 }
 else{
 	cout<<"Wrong input try again !!"<<endl;
 	getch();
 	goto abc;
 }
    return 0;
}
//*****************************
