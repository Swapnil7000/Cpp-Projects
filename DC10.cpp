#include<iostream>
using namespace std;

int main(){
    int age;
    cout<<"Enter your age"<<endl;
    cin>>age;
    (age<18) ? cout<<"Your age is below 18" : cout<<"Your age is more than 18";
    return 0;
}