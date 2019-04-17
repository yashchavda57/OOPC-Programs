#include<iostream>
#include<stdlib.h>
#include<Design.h>
#include<cstring>



using namespace std;

class String
{
    char name[20];

public:
    void getData();
    void putData();
    int operator>(String);
    int operator<(String);
    int operator==(String);
};

void String :: getData()
{
    cout<<"Enter String : ";
    fflush(stdin);
    cin>>name;
}

void String :: putData()
{
    cout<<name;
}
int String::operator>(String temp1)
{
    if(strcmp(name,temp1.name)>0)
        return 1;
    return 0;
}
int String :: operator<(String temp1)
{
    if(strcmp(name,temp1.name)<0)
        return 1;
    return 0;
}
int String :: operator==(String temp1)
{
    if(strcmp(name,temp1.name)==0)
        return 1;
    return 0;
}

int main()
{
    int ch;
    char title[] = {"Operartor OverLoading"};
    getDesign(title,50);

    while(1)
    {
        String s1,s2;
        s1.getData();
        s2.getData();

        if(s1>s2)
            cout<<endl<<"First String is Greater than Second "<<endl;
        else if(s1 == s2)
            cout<<endl<<"Both are Equal"<<endl;
        else if(s1<s2)
            cout<<endl<<"Secong String is Greate than First "<<endl;
        else
            cout<<"Error"<<endl;
        cout<<endl;
            cout<<"Press 0 to Exit "<<endl
                <<"Press 1 to Continue"<<endl
                <<"Enter Choice :";
            cin>>ch;

      switch(ch)
        {
            case 1 : system("cls");
                      getDesign(title,50);
                     break;

            case 0 : exit(0);

            default : cout<<"Error In Choice";
        }
    }

    return 0;
}
