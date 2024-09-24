/*************************************************************************
	> File Name: 05.param_constructor.cpp
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Mon 16 Sep 2024 12:36:08 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

class A{
public:
    A(): A(100, 1000){
    }
    A(int x, int y){
        this->x = x, this->y = y;

    }
    
    void output(){
        cout << x << " " << y << endl;
    }
private:
    int x, y;
};
int main(){
    A a(10, 100), b(20, 23);
    a.output();
    b.output();
    A c;
    c.output();
    return 0;
}
