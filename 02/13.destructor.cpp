/*************************************************************************
	> File Name: 13.destructor.cpp
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Tue 17 Sep 2024 12:16:44 AM CST
 ************************************************************************/

#include<iostream>
using namespace std;

class A{
public:
    A() : data(new int[10]){
        cout << this << "default constructor " << endl;
    }
    ~A(){
        cout << this << "destructor" << endl;
        delete[] data;
    }
private:
    int *data;
};

int main(){
    A a, *pa = new A();
    cout << "a: " << &a << endl; 
    cout << "pa: " << pa << endl; 
    delete pa;
    return 0;
}



