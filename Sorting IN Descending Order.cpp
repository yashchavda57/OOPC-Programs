/*Write a program that takes input for an integer 
array and designs User Defined Functions for finding sum of array elements, 
finding maximum element and sorting in descending order which are called as per 
user’s choice
*/


#include<iostream>
#define Size 2
using namespace std;
void Add(int []);
void Max(int []);
int Sort(int []);
int main()
{
int arrays[Size],ch;
cout<<"Enter Data of "<<Size<<" Element"<<endl;
for(int i = 0;i<Size;i++)
cin>>arrays[i];
while(1)
{
cout<<"1.Addition of Number"<<endl
<<"2.Find Max"<<endl
<<"3.Sort to Descending"<<endl
<<"4.Exit"<<endl
<<"Enter Choice :";
cin>>ch;
switch(ch)
{
case 1 : Add(arrays);
break;
case 2 : Max(arrays);
break;
case 3 : Sort(arrays);
for(int j = Size-1;j>-1;j--)
cout<<arrays[j]<<endl;
cout<<endl;
break;
case 4 : exit(0);
break;
default : cout<<"Error";
}
}
return 0;
}
void Add(int temp[])
{
int sum = 0;
for(int i = 0;i<Size;i++)
sum += temp[i];
cout<<"Addition is : "<<sum<<endl<<endl;
}
void Max(int temp[])
{
int maxi = Sort(temp);
cout<<"Max :"<<maxi<<endl<<endl;
}
int Sort(int temp[])
{
int PASS,MIN_INDEX;
for(int i = 0;i<Size-1;i++){
MIN_INDEX = PASS;
for(int I=PASS+1;I<Size;I++)
if(temp[MIN_INDEX]>temp[I])
MIN_INDEX = I;
if(PASS != MIN_INDEX)
{
int temp1;
temp1 = temp[PASS];
temp[PASS] = temp[MIN_INDEX];
temp[MIN_INDEX] = temp1;
}
}
return temp[Size-1];
}
