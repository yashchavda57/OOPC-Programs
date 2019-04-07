#include<stdio.h>
#include<conio.h>
void main()
{

	int n, i, x[50],y[50],sum=0;

	printf("How many number you want to enter ?\n");
	scanf("%d",&n);

	printf("Enter %d values of x and y :",n);
	for(i=0; i<n; i++)
    {
      scanf("%d %d",&x[i],&y[i]);
      sum += x[i]*y[i];
    }
	printf("Arithmetic Mean = %d",sum/n);
}
