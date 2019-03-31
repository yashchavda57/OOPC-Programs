//Write a simple interest calculation function having default argument for interest rate.

#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;
void interest(float p,float r,float t)
{
	float InterestAmt;

	InterestAmt = (float)(p*r*t)/100;
	cout<<"Interest Amount will be : " << InterestAmt <<endl;
}

int main()
{
float p,r,t;
int opt;
cout<<"Enter 1 to Calculate Interest"<<endl;
cout<<"Enter 2 for Default"<<endl;
cout<<"Entered Value : ";
cin>>opt;

switch(opt)
{
	case 1 :
		cout<<"Enter Principal Amount       : ";
		cin>>p;
		cout<<"Enter Rate of Interest       : ";
		cin>>r;
		cout<<"Enter Time Duration in Years : ";
		cin>>t;
		interest(p,r,t);
		break;
	case 2 :
		cout<<"Principal amount : 100  ||   Rate : 2%   ||  Time : 3years "<<endl;
		interest(100,2,3);
		break;
	default:
		cout<<"Error";
}

return 0;
}
