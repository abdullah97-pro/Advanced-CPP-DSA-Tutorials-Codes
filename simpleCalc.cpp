#include <iostream>
using namespace std;
int main() {
    double num1, num2;
    char ope;

    cout<<"Enter Number 1: ";
    cin>>num1;

    cout<<"Enter Operator: ";
    cin>>ope;

    cout<<"Enter Number 2: ";
    cin>>num2;

    switch (ope)
    {
    case '+':
        cout<<"Result: "<<num1+num2<<endl;
        break;
    case '-':
        cout<<"Result: "<<num1-num2<<endl;
        break;
    case '*':
        cout<<"Result: "<<num1*num2<<endl;
        break;
    case '/':
        if (num2 == 0) {
            cout<<num1<<" can not divide by "<<num2<<endl;
        }else {
        cout<<"Result: "<<num1/num2<<endl;
        }
        break;
    case '%':
        cout<<"Result: "<<(int)num1%(int)num2<<endl;
        break;
    
    default:
        break;
    }

    return 0;
}