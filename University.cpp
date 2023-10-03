#include <iostream>
using namespace std;

class university{

public:
   string dep;
   string name;
   int id;
   float gpa;

    university(){
        dep = "CSE";

    }

    void display();
};
void setinfo(university obj){
    // cout<<"enter the department name : "<<endl;
    // cin>>obj.dep;
    cout<<"enter the Student name :"<<endl;
    cin>>obj.name;
    cout<<"the entered name is="<<obj.name<<endl;
    cout<<"enter the ID Number : "<<endl;
    cin>>obj.id;
    cout<<"enter the Total Marks : "<<endl;
    cin>>obj.gpa;

}

void university::display(){

    cout<<"The name is="<<name<<endl;
      cout<<"The department ="<<dep<<endl;
      
      cout<<"The id="<<id<<endl;
      cout<<"The GPA="<<gpa<<endl; 
}

int main () {
    int i; 
    university uni[2];
    for ( i = 0; i < 2; i++)
    {
         setinfo(uni[i]);
         //uni[i].display();
    }

    cout<<"the name is"<<uni[0].name<<endl;
  for ( i = 0; i < 2; i++)
  {
   uni[i].display();
  }
  
}



