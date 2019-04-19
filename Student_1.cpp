#include<iostream>
#include<Design.h>
#define SIZE_OF_ARRAY 20
#define NO_OF_SUBJECT 5


using namespace std;

class Student
{
protected :
    int roll_no;
    char name[SIZE_OF_ARRAY];
};

class Test
{
    protected :
        int marks[NO_OF_SUBJECT];
};

class Result : private Student,private Test
{
    float avg;

public :
    void getData()
    {
        cout<<"Enter Roll Number : ";
        cin>>roll_no;
        cout<<"Enter Name of Student : ";
        cin>>name;

        for(int i = 0;i<NO_OF_SUBJECT;i++)
        {
            cout<<"Enter Marks of "<<i+1<<" Subject(Out of 100) : ";
            cin>>marks[i];
        }
    }

    float  getAvg()
    {
       int sum = 0;
       for(int i = 0;i<NO_OF_SUBJECT;i++)
            sum += marks[i];
        return (sum/NO_OF_SUBJECT);
    }

    void putData()
    {

        cout<<endl<<"Student Name : ";
        puts(name);
        cout<<"Roll Number : "<<roll_no<<endl;
        for(int i = 0;i<NO_OF_SUBJECT;i++)
            cout<<"Marks of "<<i+1<<" Subject(Out of 100) : "<<marks[i]<<endl;
        cout<<"Average is : "<<getAvg()<<endl<<endl;
    }
};

int main()
{
   char title[] = {"Inheritance:Extending the Classes"};
   getDesign(title,50);

    Result R1;
    R1.getData();
    R1.putData();
    return 0;
}
