/*************************************************************************
	> File Name: 09.convert_constructor.cpp
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Mon 16 Sep 2024 04:48:10 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

class A{
public:
    A(int z):x(z),y(z){
        cout << this << ": convert constructor" << endl;
    }
    void operator=(const A &x){
        this->x = x.x;
        this->y = x.y;
        cout << this << "operator = " << endl;
    }
    void output(){
        cout << "(" << x << "," << y << ")" <<endl;
        return;
    }
private:
    int x, y;

};

int main(){
    A a(3);
    a.output();
    a = 4;
    a.output();
    return 0;
}
