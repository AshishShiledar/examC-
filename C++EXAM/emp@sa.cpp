#include<iostream>
#include<conio.h>
using namespace std;
class Employee
{
char Name;
int Total Salary;
public:void getdata()
{
cout<<"Enter Name :"<<endl;
cin>>Name;
cout<<"Enter Total Salary :"<<endl;
cin>>Total Salary;		
}
public :void setdata()
{
cout<<Name<<endl;
cout<<TotalSalary<<endl;	
}		
};
main()
{
Employee obj[2];	
int i;
for(i=0;i<2;i++)
{
cout<<"Enter The Employee Details"<<i+1<<<< i+1 << ":" << endl;
        obj[i].getData();
        cout << endl;
    }
 cout << "Employee Details Entered:" << endl;
    for(i = 0; i < 5; i++) {
        cout << "Details of Employee" << i+1 << ":" << endl;
        obj[i].setData();
        cout << endl;
    }
}
	
