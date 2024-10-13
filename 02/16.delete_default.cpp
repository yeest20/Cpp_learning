/*************************************************************************
	> File Name: 16.delete_default.cpp
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Tue 17 Sep 2024 01:12:11 AM CST
 ************************************************************************/

#include<iostream>
using namespace std;

class A{
public:
    A() = default;
    A(int) {}
    A(const A &) = delete;
    ~A() = default;
};


int main(){
    A a;
    return 0;
}
