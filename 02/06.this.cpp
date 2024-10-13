/*************************************************************************
	> File Name: 06.this.cpp
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Mon 16 Sep 2024 01:09:14 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

class A{
public:
    A():A(0, 0) {
        cout << this << " default constructor" << endl;
    }
    A(int x, int y){
        cout << this << " : param constructor" << endl;
        this->x = x; this->y = y;

    }
    void output(){
        cout << this << " : call function" << endl; 
        cout << this->x << " " << this->y << endl;
        return;
    }
private:
    int x, y;
};

int main(){
    A a(10, 101), b;
    cout << "a : " << &a << endl;
    cout << "b : " << &b << endl;
    a.output();
    b.output();
    a.output();

    return 0;
}
