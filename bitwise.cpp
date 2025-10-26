#include <iostream>
using namespace std;
int main(){

    int x = 5;
    int y = 2;
    int result = x & y;

    // 128 64 32 16 8 4 2 1
    // 8   7  6  5  4 3 2 1

    // A & B = AB 
    // 1 & 1 = 1
    // 1 & 0 = 0
    // 0 & 1 = 0
    // 0 & 0 = 0

    // 5 -> 0101
    // 2 -> 0010

    cout<<result<<endl;

    return 0;
}
