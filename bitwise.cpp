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

    // int age = 17;

    // if (age >= 18) {
    //     cout<<"Valid"<<endl;
    // }else {
    //     cout<<"Try next year!"<<endl;
    // }


    // int number = 45;

    // if (number % 2 == 0) {
    //     cout<<"Even"<<endl;
    // }else {
    //     cout<<"Odd"<<endl;
    // }


    // string size = "xxxxxl";

    // if (size == "s") {
    //     cout<<"Small"<<endl;
    // }else if (size == "m") {
    //     cout<<"Medium"<<endl;
    // }else if (size == "l") {
    //     cout<<"Large"<<endl;
    // }else if (size == "xl")
    // {
    //     cout<<"Extra Large"<<endl;
    // } else if (size == "xxl") {
    //     cout<<"Double Extra Large"<<endl;
    // }else {
    //     cout<<"3XL Thripl Extra Large"<<endl;
    // }


    // string txt = "drinks";
    // string txt2 = "cold";

    // if(txt == "drink") {
    //     if (txt2 == "cold"){
    //         cout<<"Cold Drink"<<endl;
    //     }else if (txt2 == "hot") {
    //         cout<<"Hot Tea"<<endl;
    //     }
    // }else if (txt == "food") {

    // }else {
    //     cout<<"Not match"<<endl;
    // }


    // int x = 5;
    // int y = 3;
    // int result = x >> y;

    // 5 - 0101
    // 1 - 0001
    // ?  01010
    // ? 010100  2^2 = 4*5 = 20
    // ?0101000  

    // 5 - 0101
    // 1 - 0001

    // ?   0010|1   2^1 = 5/2
    // ?   0001|01
    // ?   0000|101


    // cout<<result<<endl;
    
    int a = -10;
    cout<<~a<<endl;

    return 0;
}
