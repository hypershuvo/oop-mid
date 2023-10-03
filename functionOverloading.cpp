#include <iostream>
using namespace std;

void add(int a, int b){
    cout<<"the sum of two : "<<(a+b);
}
void add(double a, double b, double c){
    cout<<endl<<"the sum of three : "<<(a+b+c);
}
int main (){
    add(11,12);
    add(112.2,11,23);
}