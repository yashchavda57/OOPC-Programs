// Create A Structure with Player and its various Attributes 


#include<iostream>
#include<cmath>
#include<cstring>
#include<cstdio>
using namespace std;
struct team{
	char pname[20];
	char tname[20];
	int run;
}s[5],temp;

void getdata()
{
	int i;
	for(i=0;i<5;i++)
	{
		cout<<i<<" Enter the player name : ";
		fflush(stdin);
		gets(s[i].pname);
		cout<<i<<" Enter the team name : ";
		fflush(stdin);
		gets(s[i].tname);
		cout<<i<<" Enter the Player's run : ";
		cin>>s[i].run;
		cout<<"\n";
	}
}

void sortdata(struct team s[])
{
	int i,j;
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(strcmp(s[i].tname,s[j].tname)==1)
			{
				temp = s[i];
				s[i] = s[j];
				s[j] = temp;
			}
		}
	}
}

void putdata(struct team s[])
{
	int i;
	for(i=0;i<5;i++)
	{
		cout<<"Player Name : "<<s[i].pname<<endl;
		cout<<"Team Name   : "<<s[i].tname<<endl;
		cout<<"Runs Scored : "<<s[i].run<<endl;
		cout<<"\n";
	}
}

int main()
{
	getdata();
	sortdata(s);
	putdata(s);
	return 0;
}
