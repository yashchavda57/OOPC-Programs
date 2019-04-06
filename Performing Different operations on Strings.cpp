/*Write a program that takes input for two strings and defines User Defined functions to implement concatenation, copy and comparison operations on them with return values as follows:
Concatenation : returns merged string
Copy : returns nothing
Comparison : returns 0 if same, 1 otherwise.
*/


#include<iostream>
#define Size 2
using namespace std;
string Concat(string[]);
void Copy(string[]);
int Compare(string[]);
int main()
{
string arrays[Size];
int ch;
cout<<"Enter Data of "<<Size<<" String"<<endl;
for(int i = 0;i<Size;i++)
getline(cin,arrays[i]);
while(1)
{
cout<<"1.Concatenation"<<endl
<<"2.Copy"<<endl
<<"3.Compare"<<endl
<<"4.Exit"<<endl
<<"Enter Choice :";
cin>>ch;
switch(ch)
{
case 1 :
{
string temp = Concat(arrays);
cout<<"Concatenation is : "<<temp<<endl<<endl;
break;
}
case 2 : Copy(arrays);
break;
case 3 :
if((Compare(arrays)))
cout<<"Not Same String"<<endl<<endl;
else
cout<<"Same String "<<endl<<endl;
break;
case 4 : exit(0);
break;
default : cout<<"Error";
}
}
return 0;
}
string Concat(string temp[])
{
return (temp[0] + temp[1]);
}
void Copy(string temp[])
{
string tempo[Size];
tempo[0] = temp[0];
tempo[1] = temp[1];
if(temp[0].empty() || temp[1].empty())
cout<<"Copy Unsuccessfully"<<endl<<endl;
else
cout<<"Copy Successfully"<<endl<<endl;
}
int Compare(string temp[])
{
if(temp[0] != temp[1])
return 1;
return 0;
}
