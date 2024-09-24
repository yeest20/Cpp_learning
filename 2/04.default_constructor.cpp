/*************************************************************************
	> File Name: 04.default_constructor.cpp
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Mon 16 Sep 2024 12:22:22 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

class A{
public:
    A(){
        cout << "default constructor..." << endl;
        x = 10, y = 100;
    }
    void output(){
        cout << "(" << x << ", " << y << ")" << endl;
    }
private:
    int x, y;
};


int main(){
    A a;
    a.output();
    A b{};
    b.output();
    return 0;
}
A b(){
    cout << "hello function b" << endl;
    return A();
}
