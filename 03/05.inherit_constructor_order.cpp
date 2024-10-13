/*************************************************************************
	> File Name: 05.inherit_constructor_order.cpp
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Sat 12 Oct 2024 01:18:52 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

class Base{
public:
    Base(){
        cout << "Base construtor" << endl;
    }
    virtual ~Base(){
        cout << "Base destructor" << endl;
    }
};

class A : public Base{
public:
    A(){
        data = new int[10];
        cout << "A construtor  d : " << data << endl;
    }
    ~A(){
        if(data != nullptr) delete[] data;
        cout << "A destructor" << endl;
    }
    int *data;
};

class B : public Base{
public:
    B(){
        cout << "B construtor" << endl;
    }
    ~B(){
        cout << "B destructor" << endl;
    }
};
class C : public Base{
public:
    C(){
        cout << "C construtor" << endl;
    }
    ~C(){
        cout << "C destructor" << endl;
    }
};

int main(){
    //A a;
    Base *p = new C();
    delete p;
    return 0;
}
    


