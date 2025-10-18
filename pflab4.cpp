#include <iostream>
using namesoace std;
int main()
{
	int choice,radius,area,length,width,base,height;
	cout<<"1. area of circle"<<endl;
	cout<<"2. area of rectangle"<<endl;
	cout<<"3. area of triangle"<<endl;
	cout<<"4. quit"<<endl;
	cout<<"select a number from menu:";
	cin>>choice;
	switch(choice)
	{
		case1:
			cout<<"enter radius:";
			cin>>radius;
			area=3.14*(radius*radius);
			cout<<"the area of circle is:"<<area<<endl;
			break;
		case2:
			cout<<"enter length and width:"<<endl;
			cin>>length>>width;
			area=length*width;
			cout<<"the area of rectangle is :"<<area<<endl;
			break;
		case3:
			cout<<"enter base and height:";
			cin>>base>>height;
			area=0.5*(base*height);
			cout<<"the area of triangle is:"<<area<<endl;
			break;
			default:
				cout<<"quit"<<endl;
				break;
			}
			
}
