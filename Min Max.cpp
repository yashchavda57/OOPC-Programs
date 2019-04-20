#include<iostream>
using namespace std;

class num{
	int a[5],i,j;
	int sum = 0;
	
	public:
		void getdata(){
			for (i=0;i<5;i++)
				{
					cin>>a[i];
				}
				printf("\n");
		}
		
		void putdata(){
			for (i=0;i<5;i++)
				{
					cout<<a[i];
				}
		}
		
		void sort(){
			for(i=0;i<4;i++)
				{
					int min= i;
					for(j=i+1;j<5;j++)
						{
							if(a[j]<a[min])
								{
									min = j;
								}
									int temp = a[i];
									a[i]= a[min];
									a[min]= temp;
								
						}
				}
							
		}
		
	void max()	{
		
		for(i=1;i<5;i++)
			{
				sum = a[i]+sum;
			}
			cout<<sum;
	}
	
	void min() {
		sum=0;
		
		for(j=0;j<=3;j++)
			{
				sum = a[j]+sum;
			}
			cout<<sum;
	}
};

int main(){
	num n1;
	n1.getdata();
	
	n1.sort();
	n1.max();
	n1.min();
	return 0;
}
