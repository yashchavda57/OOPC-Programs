#include<iostream>
#include<fstream>
#include<cstring>
#include<iomanip>
#define SIZE 5
using namespace std;

class person{
  int person_id;
  string name;
  int age;


public:


  void getdata(){
    cout << "\nEnter Person ID : "; cin >> person_id;
    cout << "\n Enter name : "; cin >> name;
    cout << "\nEnter Age : "; cin >> age;
  }

  void display(){
    cout << setw(10) << person_id << setw(10) << name << setw(10) << age << endl;
  }

  int get_personid(){
    return person_id;
  }

  string get_name(){
    return name;
  }

  int get_age(){
    return age;
  }


};



int main(){
  person p[SIZE];

  ofstream outfile("person.txt");

  outfile << "\nPerson ID      Name      Age\n";

  for(int i = 0;i < SIZE; i++){
    p[i].getdata();

    outfile << p[i].get_personid();
    outfile << "   " << p[i].get_name();
    outfile << "   " <<p[i].get_age();
    outfile << "\n";
  }

  outfile.close();

  int id;
  cout << "\nEnter ID to search for : ";
  cin >> id;

  ifstream infile("person.txt");
  int i;

  for( i = 0; i< SIZE ; i++){
    if( p[i].get_personid() == id){
      p[i].display();
      break;
    }
  }

  if(i == SIZE){
    cout << "\nPerson Not Found !!!";
  }



  return 0;
}
