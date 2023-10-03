#include <iostream>
using namespace std;

class cal {
  public : 
    cal(int a, int b){
      res = a + b;
    }
    cal(float a, float b){
      res = a - b; 
    }
    void display(){
      cout<<res<<endl;
    }
    private: 
      float res;
};
int main () {
  float f1,f2;
  int i1,i2;

  cout<<"int value 1  :";
  cin>>i1;
  cout<<"int value 2  :";
  cin>>i2;
  cout<<"flt value 1  :";
  cin>>f1;
  cout<<"flt value 2  :";
  cin>>f1;

  cal ical(i1,i2);
  cal fcal(f1,f2);

  cout<<"the int sum is : " ;
  ical.display();
  cout<<"the float sub is : " ;
  fcal.display();
  
  
  

}