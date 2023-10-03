#include <iostream>
using namespace std;

class cse {
    private:
        int mid,fi;
        public:
            cse(int a){
                mid = 20;
                fi = a;
            }
            friend void add(cse addobj);
};
 void add(cse addobj){
        int res = addobj.mid + addobj.fi; 
        cout<<"the total mark is : "<<res<<endl;
}

int main () {
    cse obj1(26);
    cse obj2(31);
    add(obj1);
    add(obj2);
}