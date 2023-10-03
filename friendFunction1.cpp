#include<iostream>
using namespace std;

class cse{
private:
    float mid, fi;

public:
    cse(float b){
        mid = 10;
        fi = b;
    }
    friend float add(cse addObj);
    ~cse()
    {
        cout<<"I'm here"<<endl;
    }
};
float add(cse addObj){
    // cse.addObj;
    // cse.addObj2;
    float result = addObj.mid + addObj.fi; 
    cout<<"the total number is : "<<result<<endl;
}
int main()
{
    cse objo(20);
    cse objo2(27);
    add(objo);
    add(objo2);

    // cse s1(10);
    // cse s2(60);

    // add(s1, s2);
}