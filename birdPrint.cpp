#include<iostream>
using namespace std;

class bird{
    public: 
    string name;
    float age;

    void display();

};

int main() {
    bird b1;
    cout<<"enter bird name : " << endl;
    cin>>b1.name;
    cout<<"enter bird age  :"<<endl;
    cin>>b1.age;

    b1.display();
}

void bird::display() {
    cout<< "\t\t\t Output \t\t\t"<<endl;
    cout<< "bird name : "<<name<<endl;
    cout<<"bid age :" <<age<<endl;
}