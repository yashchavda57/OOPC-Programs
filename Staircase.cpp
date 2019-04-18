//Pattern 2
#include<stdio.h>
#include<conio.h>
int main(){
int n,i,j,k;
printf("Enter the no of lines: ");
scanf("%d",&n);
for(i=1;i<n+1;i++){
	printf(" ");
for(j=0;j<n-i;j++){
printf(" ");
}
for(k=0;k<i;k++){
printf("*");
}
printf("\n");
}
getch();
return 0;
}
