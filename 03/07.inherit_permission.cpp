/*************************************************************************
	> File Name: 07.inherit_permission.cpp
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Sat 12 Oct 2024 03:59:00 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

class Base{
public:
    int public_x;
protected:
    int protected_x;
private:
    int private_x;
};

class A : private Base{
public:
    void set(){
        this->public_x = 3;
        this->protected_x = 3;
        return;
    }
};


int main(){
    A a;
    Base b;
    b.public_x = 1;
    return 0;
}
