/*************************************************************************
	> File Name: 04.subclass_storage.cpp
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Sat 12 Oct 2024 12:44:42 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

void output_address(void* _p, size_t n){
    unsigned char *p = (unsigned char *)(_p);
    printf("%p", p);
    for(int i = 0; i < n; i++){
        if(i % 4 == 0) printf("\n");
        printf("%X", p[i]);
    }
    printf("\n");
}

class Base1{
public:
    Base1() : b1(0x11111111){}
    int b1;
};

class Base2{
public:
    Base2(): b2(0x22222222){}
    int b2;
};

class A : public Base2, public Base1 {
public:
    A() : a(0x33333333){}
    int a;
};

class B : public Base1, public A{
public:
    B() : b(0x44444444){}
    int b; 
};

int main(){
    A a;
    output_address(&a, sizeof(a));
    B b;
    cout << endl;
    output_address(&b, sizeof(b));
    return 0;
}
