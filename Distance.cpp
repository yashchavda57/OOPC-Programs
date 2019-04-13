#include<iostream>
#include<Design.h>


using namespace std;
int NO_OF_OBJECT;

class Distance
{
    float inches,feet;

public :

    Distance(float = 0,float = 0);
    friend Distance addObj(Distance []);
    friend void  show(Distance);
};

Distance :: Distance(float a,float b)
{
    inches = a;
    feet = b;
}

Distance addObj(Distance temp[])
{
  Distance ans;
  for(int i = 0;i<NO_OF_OBJECT;i++)
  {
        ans.inches += temp[i].inches;
        ans.feet += temp[i].feet;
  }
      ans.feet += ans.inches/12;
      ans.inches = (int)ans.inches % 12;
    return ans;
}

 void  show(Distance temp)
{
    cout<<endl<<"Total Inches : "<<(int)temp.inches<<"  and Total Feets : "<<(int)temp.feet<<endl;
}

int main()
{

    float temp_inches,temp_feet;

    char title[] = {"Friend and Constructor Program"};
    getDesign(title,50);

    cout<<"How many Object you want create ?";
    cin>>NO_OF_OBJECT;

    Distance d[NO_OF_OBJECT],temp;

    for(int i = 0;i<NO_OF_OBJECT;i++)
    {
        cout<<endl<<"Enter Data of "<<i+1<<" Object";
        cout<<endl<<"Enter Inches  : ";
        cin>>temp_inches;
        cout<<"Enter Feets : ";
        cin>>temp_feet;
        d[i] = Distance(temp_inches,temp_feet);
    }

    temp = addObj(d);
    show(temp);
    return 0;
}
