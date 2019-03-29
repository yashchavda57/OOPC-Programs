#include<iostream>
#include<string.h>
 #include<stdio.h>
 #include<iomanip>
 #define SIZE_OF_NAME 20
 #define NO_OF_PLAYERS 3
 #define NO_OF_MATCH 0
 using namespace std;

 class Player;
 void swapValue(Player *,Player *);
 class Player{

 char t_name[SIZE_OF_NAME],p_name[SIZE_OF_NAME];
 int run[NO_OF_MATCH];

 public :
 void getData();
 void putData();
 static void SortData(Player []);

 };

 void Player :: getData(){
 cout<<"Enter Team Name : ";
 fflush(stdin);
 gets(t_name);
 cout<<"Enter Player Name : ";
 fflush(stdin);
 gets(p_name);
 for(int i = 0;i<NO_OF_MATCH;i++){
 cout<<i+1<<" Match Runs : ";
 cin>>run[i];
 }
 }

 void Player :: putData(){


cout<<"Player Name : "<<p_name<<setw(10)<<" Team Name : "<<t_name<<setw(10);
 for(int i = 0 ; i <NO_OF_MATCH;i++)
cout<<i+1<<" Match Run is : "<<run[i]<<setw(10);
 cout<<endl;
 }


 void Player :: SortData(Player P[]){


 int MIN_INDEX,PASS;
 for(int PASS = 0 ;PASS<NO_OF_PLAYERS-1;PASS++){
 MIN_INDEX = PASS;
 for(int I = PASS + 1;I < NO_OF_PLAYERS;I++){
 if(strcmp(P[MIN_INDEX].t_name,P[I].t_name)>0)
 MIN_INDEX = I;

 }

 if(MIN_INDEX != PASS)
 swapValue(&P[MIN_INDEX],&P[PASS]);
 }
 }

 void swapValue(Player *a,Player *b)
 {
 Player temp;
 temp = *a;
 *a = *b;
 *b = temp;
 }

 int main(){

 Player p[NO_OF_PLAYERS];
 cout << "Enter Data of "<<NO_OF_PLAYERS<<" Players and their Runs of
"<<NO_OF_MATCH<<" Matches"<<endl;

 for(int i = 0; i <NO_OF_PLAYERS;i++){
 cout<<i+1<<" Player Data : "<<endl;
 p[i].getData();
 cout<<endl<<endl;
 }

 Player :: SortData(p);

 cout<<"After Sorting : "<<endl;
 for(int i = 0; i <NO_OF_PLAYERS;i++)
 p[i].putData();

 return 0;
 }
