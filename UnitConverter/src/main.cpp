#include<iostream>
#include"unitlib.h"

using namespace std;

int main(){
    cout<<"-----input 0~6-----"<<endl;
    cout<<"-----1:szh-----"<<endl;
    cout<<"-----2:hzs-----"<<endl;
    cout<<"-----3:mzy-----"<<endl;
    cout<<"-----4:yzm-----"<<endl;
    cout<<"-----5:bzq-----"<<endl;
    cout<<"-----6:qzb-----"<<endl;
    cout<<"-----0:quit-----"<<endl;
    int number;
    double yournum;
    while(true){
        cin >> number;
        if(number == 0){
            break;
        }
        cin>>yournum;
        switch (number)
        {
        case 1:
            cout<<szh(yournum)<<endl;
            break;
        case 2:
            cout<<hzs(yournum)<<endl;
            break;
        case 3:
            cout<<mzy(yournum)<<endl;
            break;
        case 4:
            cout<<yzm(yournum)<<endl;
            break;
        case 5:
            cout<<bzq(yournum)<<endl;
            break;
        case 6:
            cout<<qzb(yournum)<<endl;
            break;
        default:
            break;
        }
    }
    return 0;
}