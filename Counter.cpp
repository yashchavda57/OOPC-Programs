#include<iostream>
#include<Design.h>
using namespace std;

class Player
{
    int static checker;

public:
        Player()
        {
            checker++;
        }
        ~Player()
        {
            if(checker<=0)
                cout<<endl<<"No More Object Exists"<<endl;
            else
            checker--;
        }

        void display()
        {
            cout<<endl<<"No of Object Exists : "<<checker<<endl<<endl;
        }
};

int Player :: checker;

 int main()
 {
     int ch;
     Player *temp;
     char title[] = {"Constructor And Destructor Program"};
     getDesign(title,50);
     temp->display();

     while(1)
     {
     cout<<"Press 1 to Create Object"<<endl<<
           "Press 0 to Destroy Last Object"<<endl<<
           "Press 2 to Exit"<<endl<<
           "Enter Choice : ";
            cin>>ch;
            if(ch == 1)
            {
                temp = new Player;
                temp->display();
            }
            else if(ch == 0)
            {
                temp->~Player();
                temp->display();
            }
            else if(ch == 2)
                exit(0);
            else
            {
                system("cls");
                temp->display();
            }
     }
     temp->display();
     return 0;
 }
