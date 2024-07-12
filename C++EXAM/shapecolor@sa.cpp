#include<iostream>
#include<conio.h>
using namespace std;
class shape
{
char rectangle,circle;
public : void getdata()
{
cout<<"draw shape of rectangle :"<<endl;
cin>>rectangle;
cout<<"draw shape of circle :"<<endl;
cin>>circle;	
}
public : void setdata()
{
cout<<rectangle<<endl;	
cout<<circle<<endl;	
}
};
class color
{
char orange, black, purple;
public : void getdata()
{
cout<<"orange :"<<endl;
cin>>orange;
cout<<"black :"<<endl;
cin>>black;	
cout<<"purple :"<<endl;
cin>>purple;
}
public : void setdata()
{
cout<<orange<<endl;	
cout<<black<<endl;
cout<<purple<<endl;	
}		
};
main()
{
Shape obj();
color obj1();
obj.getdata()
obj.setdata()
getch();	
}
