#include <iostream>
using namespace std;

class students
{
private:
    int rl;
    float res;
public: 
    void disply(){
        cout<<rl<<" "<<res<<" "<<endl;
    }
    students(int a, float b){
        rl = a;
        res = b;
    }
};
int main () {
    students s1(2300,3.22);
    students s2(2399,3.69);
    s1.disply();
    s2.disply();
}
