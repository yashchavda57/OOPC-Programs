//WAP for overloading area function which calculate the area of circle, rectangle and triangle.


#include<iostream>
#include<cstdlib>
#include<cstring>
#define pi 3.14
#include<cmath>

using namespace std;

class shape{
	
	float height,base,radius,len1,len2,len3;
	
	public:
		float area(float radius)
		{
			float AreaC = pi*pow(radius,2);
			cout<<"Area of circle : "<<AreaC;
			return AreaC;
		}
		float area(float height,float base)
		{
			float AreaT = (1/(float)2)*(base*height);
			cout<<"Area of Triangle : "<<AreaT;
			return AreaT;
		}
		float area(float len1,float len2,float len3)
		{
			float AreaR = len1*len2;
			cout<<"Area of Reactangle : "<<AreaR;
			return AreaR;
		}
		
};


int main()
{
	float height,base,radius,len1,len2,len3;
	int opt,ans;
	shape obj;
	cout<<"---Select Option to find area---"<<endl;
	cout<<"Press 1 for Circle"<<endl;
	cout<<"Press 2 for Rectangle"<<endl;
	cout<<"Press 3 for Triangle"<<endl;
	cin>>opt;
	
	switch(opt)
	{
		case 1:
			
			cout<<"Enter radius of circle : ";
			cin>>radius;
			obj.area(radius);
			//cout<<"The area of circle will be : "<<ans;
			break;
		case 2:
			
			cout<<"Enter Length and width of Rectangle : ";
			cin>>len1;
			cin>>len2;
			obj.area(len1,len2,len3);
			//cout<<"The area of Rectangle will be : "<<ans;
			break;
		case 3:
			
			cout<<"Enter Height and Base of Triangle : ";
			cin>>height;
			cin>>base;
			obj.area(height,base);
			//cout<<"The area of Triangle will be : "<<ans;
			break;
		default:
			cout<<"Please Enter from the Given Data!";
			
	}
}
