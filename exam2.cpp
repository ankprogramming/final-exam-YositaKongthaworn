#include<iostream>
#include<fstream>
#include<string>
#include <conio.h>
using namespace std;

int main() {
    int cmd;
    string name;
    string line;
    ofstream writefile;
    ifstream readfile;

    do{
        cout<<"MENU"<<endl;
        cout<<"1. Add std"<<endl;
        cout<<"2. LIst std"<<endl;
        cout<<"3. Search std"<<endl;
        cout<<"4. Quit"<<endl;
        cout<<"Please Enter MENU"<<endl;
        cin>>cmd;

        if (cmd==1){
            cout << "Enter STD name :";
            cin >> name;
            writefile.open("std.txt",fstream::app);

            if(writefile.is_open()){
                writefile << name <<endl;
                writefile.close();
            }else {
                cout << "Unable to open file";
            }

        } else if (cmd==2){

         readfile.open("std.txt");
         if (readfile.is_open()) {
            while (getline(readfile,line))
                cout << "The result of search std = "<<line <<endl;
         }
            readfile.clear();
            break;


        }else if (cmd==3){
           if (readfile.is_open()) {
            while (getline(readfile,line))
                cout << "The result of search std = "<<line <<endl;
         }
            readfile.clear();
            break;



  }else if (cmd==4){break;}
    } while(1);


    return 0;
}
