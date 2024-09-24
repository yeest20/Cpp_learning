/*************************************************************************
	> File Name: 10.copy_constructor.cpp
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Mon 16 Sep 2024 07:12:45 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

class A{
public:
    A(): x(0), y(1){
        cout << this << "default constructor" << endl;
    }
    A(const A &a) : x(a.x), y(a.y){
        cout << this << "copy constructor" << endl;
    }
    void operator=(const A &a){
        cout << this << " operator=" <<endl;
    }
    void output(){
        cout << this->x << " " << this->y << endl;
    } 
private:
    int x, y;
};

int main(){
    const A c;
    A a, b = c;
    b = a;
    cout << "&a = " << &a << endl;
    cout << "&b = "<< &b << endl;
    a.output();
    b.output();
    return 0;
}
