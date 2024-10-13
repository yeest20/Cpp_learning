/*************************************************************************
	> File Name: 21.ex1.cpp
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Tue 17 Sep 2024 02:45:54 AM CST
 ************************************************************************/

#include<iostream>
using namespace std;

class A{
public:
    A(){
        cout << "constructor" << endl;
    }
    void destroy(){
        delete this;
        return;
    }
private:
    ~A() {
        cout << "destructor" << endl;
    };
friend int main();
};


int main(){
    A a;
    A *p = new A();    
    p->destroy();
    return 0;
}
