#include <iostream>
using namespace std;
int main(){

    short day;

    cout<<"Enter day: "<<endl;
    cin>>day;

    switch(day){
        case 0:
            cout<<"Saturday"<<endl;
            break;
        case 1:
            cout<<"Sunday"<<endl;
            break;
        case 2:
            cout<<"Monday"<<endl;
            break;
        case 3:
            cout<<"Tuesday"<<endl;
            break;
        case 4:
            cout<<"Wednessday"<<endl;
            break;
        case 5:
            cout<<"Thursday"<<endl;
            break;
        default:
            cout<<"Friday"<<endl;
    }

    return 0;
}
