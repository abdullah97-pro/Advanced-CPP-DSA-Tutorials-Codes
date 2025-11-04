#include <iostream>
using namespace std;
int main(){

    // short day;

    // cout<<"Enter day: "<<endl;
    // cin>>day;

    // switch(day){
    //     case 0:
    //         cout<<"Saturday"<<endl;
    //         break;
    //     case 1:
    //         cout<<"Sunday"<<endl;
    //         break;
    //     case 2:
    //         cout<<"Monday"<<endl;
    //         break;
    //     case 3:
    //         cout<<"Tuesday"<<endl;
    //         break;
    //     case 4:
    //         cout<<"Wednessday"<<endl;
    //         break;
    //     case 5:
    //         cout<<"Thursday"<<endl;
    //         break;
    //     default:
    //         cout<<"Friday"<<endl;
    // }


    // int grade;
    // cout<<"Enter Grade: ";
    // cin>>grade;

    // if(grade >= 90) {
    //     cout<<"Grade: A"<<endl<<"Remark: Excellent"<<endl;
    // }else if(grade >= 75) {
    //     cout<<"Grade: B"<<endl<<"Remark: Very Good"<<endl;
    // }else if(grade >= 60) {
    //     cout<<"Grade: C"<<endl<<"Remark: Good"<<endl;
    // }else if(grade >= 50) {
    //     cout<<"Grade: D"<<endl<<"Remark: Poor"<<endl;
    // }else {
    //     cout<<"Grade: None"<<endl<<"Remark: Fail"<<endl;
    // }


    // int x = 1;

    // while(x < 1) {
    //     cout<<x<<endl;
    //     x+=1;
    // }

    // for(int i = 1; i < 10; i++){
    //     cout<<i<<endl;
    // }

    // int x = 1;
    // do {
    //     cout<<x<<endl;
    //     x+=1;
    // }while(x < 10);


    for(int i = 1; i < 5; i++){
        for(int j = 1; j < 11; j++) {
            if(j == 4) continue;
            cout<<i<<" * "<<j<<" = "<<i*j<<endl;
        }
        cout<<endl;
    }

    return 0;
}
