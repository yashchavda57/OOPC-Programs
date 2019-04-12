#include<iostream>
#include<iomanip>
//#include<Design.h>

using namespace std;

int no_of_obj;

class Complex
{
      float x,y;

public :
    Complex(){ x = 0 ; y = 0;}
    Complex(float,float);
    void addObjects(Complex []);
    void putData();
};
Complex :: Complex(float tx,float ty)
    {
     x = tx;
     y = ty;
    }

void Complex :: putData()
{
     cout<<"X is : "<<x<<setw(15)<<"Y is : "<<y;

}

void Complex :: addObjects(Complex temp[])
{
    for(int i = 0 ;i <no_of_obj;i++)
    {
        x += temp[i].x;
        y += temp[i].y;
    }
}
int main()
{
    float data1,data2;

    /*char title[] = {"Dynamic Initializtion of Constructor"};
    getDesign(title);*/

    cout<<"Enter No.of Object you want to create : ";
    cin>>no_of_obj;

    Complex C[no_of_obj],con;

    for(int i = 0;i<no_of_obj;i++)
    {
    cout<<endl<<"Enter "<<i+1<<" Object Data"<<endl;
    cout<<"Enter X co-ordinate : ";
    cin>>data1;
    cout<<"Enter Y co-ordinate : ";
    cin>>data2;
    cout<<endl;
    C[i]= Complex(data1,data2);
    }

    con.addObjects(C);
    cout<<"Addition of All the co-ordinates of all the objects are : "<<endl<<endl;
    con.putData();
    return 0;
}
