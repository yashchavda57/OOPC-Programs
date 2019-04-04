#include<iostream>
#include<cstring>
#include<iostream>
#include<iomanip>
#include<conio.h>

using namespace std;
void line();
class Book{
	int bid;
	char title[50];
	char author[20];
	int price;
	
	public:
		
		void getdata()
		{
			cout<<"\nEnter the book Id: ";
			cin>>bid;
			cout<<"Enter the book name: ";
			fflush(stdin);
			gets(title);
			cout<<"Enter the book's author: ";
			fflush(stdin);
			gets(author);
			cout<<"Enter the book price: ";
			cin>>price;
		}
		
		void display()
		{
			cout<<"Book Id\t"<<"\tBook Name\t"<<"Author's Name\t"<<"Price"<<endl;
			cout<<bid<<"\t\t";
			
			
			fflush(stdin);
			puts(title);
			fflush(stdin);
			puts(author);
			cout<<price<<endl;
		}
};
int main()
{
	cout<<setw(49)<<"BOOK'S  TABLE\n";
	line();
	Book b[1];
	int i;
	for(i=0;i<1;i++)
	{
		b[i].getdata();
	}
		for(i=0;i<1;i++)
	{
		b[i].display();
	}
	
	return 0;
}

void line()
{
	int i;
	for(i=0;i<=45;i++)
	{
		cout<<"--";
	}
}
