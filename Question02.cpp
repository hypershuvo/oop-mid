#include <iostream>

using namespace std;

class spring{
    public:
        int mnt,yer;

        spring(int a, int b){
            mnt = a;
            yer = b;
        }
        ~spring(){
            cout<<"the distractopr is : "<<endl;
        }

        void showDate();
};

int main(){
    spring s1(11,2023);
    spring s2(12,2022);

    s1.showDate();
    s2.showDate();    
    
}

void spring::showDate(){
    cout<<"the month is : "<<mnt<<endl;
    cout<<"the year is : "<<yer<<endl;
}