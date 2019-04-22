#include<iostream>
#include<Design.h>

using namespace std;

class Person
{
protected :
     string name;
     int code;
};

class Account : virtual protected Person
{
protected :
    float pay;
};

class Admin : virtual protected Person
{
protected:
    float Experience;
};

class Employee : private Admin,private Account
{
public:
    void getData()
    {
        cout<<"Enter Student Name : ";
        getline(cin,name);
        cout<<"Enter Code : ";
        cin>>code;
        cout<<"Enter Pay Amount : ";
        cin>>pay;
        cout<<"Enter Experience(in year) : ";
        cin>>Experience;
    }

    void putData()
    {
        cout<<endl<<"Name : "<<name<<endl
            <<"Code : "<<code<<endl
            <<"Pay : "<<pay<<endl
            <<"Experience(in year) : "<<Experience<<endl;
    }
};

int main()
{
   char title[] = {"Multiple and Multi_Level Inheritance"};
   getDesign(title);
   Employee E1;
   E1.getData();
   E1.putData();
   return 0;

}
