#include <iostream>
using namespace std;
int main(){

    // int x = 50;
    // int y = 40;
    // int result = 99 | 66;

    // 128 64 32 16 8 4 2 1
    // 8   7  6  5  4 3 2 1

    // A & B = AB 
    // 1 & 1 = 1
    // 1 & 0 = 0
    // 0 & 1 = 0
    // 0 & 0 = 0

    // A | B = AB 
    // 1 | 1 = 1
    // 1 | 0 = 1
    // 0 | 1 = 1
    // 0 | 0 = 0

    // 5 -> 0101
    // 2 -> 0010

    // 50 - 00110010
    // 40 - 00101000
    // ?  - 00111010  - 32+16+8+2 -> 58

    // cout<<result<<endl;


    int x = -12;

    if (x > 0) {
        cout<<"Greater"<<endl;
    }

    if (x < 0) {
        cout<<"Lower"<<endl;
    }

    return 0;
}
