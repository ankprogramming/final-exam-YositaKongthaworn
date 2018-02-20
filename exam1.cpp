#include <iostream>
using namespace std;
int main() {
    float a,b,r1,r2,r3,r4,cmd;


    cout<<"Welcome to CLI Calculator V1.00"<<endl;

    cout<<"Number 1=";
    cin>>a;

    cout<<"Number 2=";
    cin>>b;

    do {
        cout<<"Menu\n1.+\n2.-\n3.*\n4./\n5.quit"<<endl;
        cin>>cmd;
        if (cmd==1){
            r1=a+b;
            cout<<"Result = "<<r1<<endl;
        }else if (cmd==2){
            r2=a-b;
            cout<<"Result= "<<r2<<endl;
        }else if (cmd==3){
            r2=a*b;
            cout<<"Result= "<<r3<<endl;
        }else if (cmd==4){
            r2=a/b;
            cout<<"Result= "<<r4<<endl;
        }{break;}
       } while(1);
        return 0;
}
