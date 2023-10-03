#include <iostream>
using namespace std;


class bulding
{
 public:
  string color;
  int hight;
  int area;

        bulding(){
            cout<<"enter a color : "<<endl;
            cin>>color;
            cout<<"enter a hight : "<<endl;
            cin>>hight;
            cout<<"enter a area : "<<endl;
            cin>>area;
        }
        void display(){
            cout<<" "<<color<< " " <<hight<<" "<<area;
        }
};
 int main(){
    bulding b1;
     b1.display();
 } 