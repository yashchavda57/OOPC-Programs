#include<iostream>
#include<fstream>
using namespace std;
int main (int argc, char * argv[])
{
  fstream fileout,filein;
  char ch;
  fileout.open("argv[1]");
  filein.open("argv[2]");
  fileout.seekg(0,ios::end);
  int size = fileout.tellg();
  fileout.seekg(0,ios::beg);

  for(int i=0;i<size;i++)
  {
      fileout.get(ch);
      cout<<ch;
      filein<<ch;
  }

  fileout.close();
  filein.close();
  return 0;
}
