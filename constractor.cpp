#include <iostream>
using namespace std;

class st{
    public: 
        char name[50];
        int rl;
        float fee;

        st(){
            cout<<"enter a stuen name : " <<endl;
            cin>>name;
            cout<<"enter a stuen rl : " <<endl;
            cin>>rl;
            cout<<"enter a stuen fee : " <<endl;
            cin>>fee;
        }

            void display(){
                cout<<name<<" "<<rl<<" "<<fee<<endl;
            }
};

int main (){
        st s1;
            s1.display();
}