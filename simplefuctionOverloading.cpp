#include <iostream>
using namespace std;

class Shop
{
public:
     string product;
     double price;
      int available;
      
      Shop(string x, double y,int z){
          product= x;
          price=y;
          available=z;
      }
      
      double calculate();
    
};

void displayinfo(Shop item);

int main (){
    
     Shop item("bol",85.63,56);
     displayinfo(item);
}

void displayinfo(Shop item){
    
     cout<<"product : " <<item.product<<endl;
     cout<<"product : " <<item.price<<endl;
     cout<<"product : " <<item.available<<endl;
     cout<<"total price this item= "<<item.calculate()<<endl;
     
}
double Shop::calculate(){
    return price*available;
}