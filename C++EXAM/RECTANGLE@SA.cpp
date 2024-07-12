#include<iostream>
#include<conio.h>
using namespace std;
class Rectangle
{
int length,width;
area=length*width;

public: void getdata()
{
cout<<"Enter The Value Of length:"<<endl;
cin>>length;
cout<<"Enter The Value Of width:"<<endl;
cin>>width;	
cout<<"Value of area :"<<endl;
cin>>area;
}
public :void setdata()
{
cout<<length<<endl;
cout<<width<<endl;
cout<<area<<endl;	
}
};
main()
{
Rectangle obj();
obj.getdata();
obj.setdata();
getch();	
}