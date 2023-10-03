#include <iostream>
using namespace std;

class shop{
    public :
        string prd;
        int prc;
        float numofi;

        shop(string p,int pr, float n){

                prd = p;
                prc = pr;
                numofi = n;

            //  cout<<"enter a product name :"<<endl;
            //  cin>>prd;
            //  cout<<"enter a product price :"<<endl;
            //  cin>>prc;
            //  cout<<"enter product quantity : "<<endl;
            //  cin>>numofi;
        }
        float cal (){
            return prc*numofi;
        }
};
        void display(shop s){
                cout<<"product name : "<<s.prd<<endl;
                cout<<"product pice : "<<s.prc<<endl;
                cout<<"product quantity : "<<s.numofi<<endl;
                cout<<"total price of product : "<<s.cal ()<<endl;
        };

        int main (){
            shop p1("bangla",900,03);
            display(p1);
        }
