/*************************************************************************
	> File Name: 18.new_delete.cpp
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Tue 17 Sep 2024 01:34:22 AM CST
 ************************************************************************/

#include<iostream>
using namespace std;

class A{
public:
    A() = default;
    A(int ): type("int"){
        cout << "int construtor" << endl;
    }
    A(double ): type("double"){
        cout << "double construtor" << endl;
    }
    A(int , int): type("int int"){
        cout << "int int construtor" << endl;
    }
    ~A(){
        cout << type << " destuctor" << endl;
    }
    string  type;
};


int main(){
    int *p1 = new int;
    int *p2 = new int(100);
    int *p3 = new int[100];
    cout << p1 << " sizeof(*p1) = " << sizeof(*p1) << endl;
    cout << p2 << " *p2 = " << *p2 << endl;
    for(int i = 0; i < 100; i++){
        p3[i] = i + 1;
    }
    for(int i = 0; i < 100; i++){
        cout << p3[i] << " ";
    }
    cout << endl;

    delete p1;
    delete p2;
    delete[] p3;

    A *a1 = new A(123);
    A *a2 = new A(12.3);
    A *a3 = new A(1, 2);
    delete a1;
    delete a2;
    delete a3;

    A *arr = new A[100];
    delete[] arr;
    return 0;
}
