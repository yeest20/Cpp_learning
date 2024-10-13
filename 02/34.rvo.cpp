/*************************************************************************
	> File Name: 34.rvo.cpp
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Tue 17 Sep 2024 04:43:50 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

class A{
public:
    A() {
        cout << this << " default constructor" << endl;
    }
    A(const A &a){
        cout << this << " copy constructor" << endl;
    }
    //A(const A &&a){
      //  cout << "move constructor" << endl;
    //}
};

A f(){
    A temp;
    cout << " temp : " << &temp << endl;
    return temp;
}

int main(){
    A a = f();
    cout << " a : " << &a << endl;
    return 0;
}


