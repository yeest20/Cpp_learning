/*************************************************************************
	> File Name: 09.left_right_value.cpp
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Mon 16 Sep 2024 05:15:43 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

void test(const int &x){
    cout << "test function" << endl;
    return ;
}

void g(int &x){
    cout << "g: left value " << x << endl; 
    return;
}

void g(int &&x){
    cout << "g : right value " << x << endl;
    return;
}

void f(int &x){
    cout << x << " is left value" << endl;
    g(x);
    return ;
}

void f(int &&x){
    cout << x << " is right value" << endl;
    g(std::move(x));
    g(std::forward<int &>(x));
}
int main(){
    int a = 12, b = 13;
    f(123); // right 
    f(12 + 23); // right
    f(a + b);  // a + b = 25 存储在匿名变量中，是右值
    f(a);// left
    f(b);// left
    f(a++);// right
    f(++a);// left
    (++a) = 10001;
    test(123);
    cout << a << endl;
    return 0;
}
