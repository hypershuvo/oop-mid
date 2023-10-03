#include <iostream>
using namespace std;

class bubt{
    public:
        string name;
        int id;
        float cgpa;

        bubt(){
            cout<<"\t\t\t Welcome to BUBT \t\t\t"<<endl;
        }
        bubt(string a,int b,float c){
            name = a;
            id = b;
            cgpa = c;
        }
        void display(){
            cout<<name<<" "<<id<<" "<<cgpa<<endl;
        }
};
int main(){
    bubt ob;
    bubt s1("joy",1322,3.71);
    s1.display();
    bubt s2("nihan",1325,3.11);
    s2.display();
    bubt s3("ashraful",1356,3.60);
    s3.display();
}