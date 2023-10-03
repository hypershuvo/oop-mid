#include <iostream>
using namespace std;

class tree{
    public :
        string name;
        int length;
        int width;


        tree(){
            name = "Segun Tree";
            cout<<"enter a hight : "<<endl;
            cin>>length;
            cout<<"enter a width : "<<endl;
            cin>>width;
        }
        int size();
};
int main (){
    tree t1;
        cout<<t1.size();
           
}

int tree::size(){
    // int res;
  return length*width;
    // cout<<name<<endl;
    // cout<<res;
}