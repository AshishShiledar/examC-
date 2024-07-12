#include<iostream>
#include<conio.h>
using namespace std;
class Employee
{
char Name,Designation;
int Salary;
public:void getdata()
{
cout<<"Enter Name :"<<endl;
cin>>Name;
cout<<"Enter Salary :"<<endl;
cin>>Salary;
cout<<"Enter Designation :"<<endl;
cin>>Designation;		
}
public :void setdata()
{
cout<<Name<<endl;
cout<<Salary<<endl;
cout<<Designation<<endl;	
}		
};
main()
{

Employee obj();
obj.getdata();
obj.setdata();
getch();
}