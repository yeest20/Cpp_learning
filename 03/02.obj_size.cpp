/*************************************************************************
	> File Name: 02.obj_size.cpp
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Sat 12 Oct 2024 12:01:51 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

class Base{
public:
    long long x;
};

class A : public Base{
public:
    int y;
};


void output_address(void* _p, size_t n){
    unsigned char *p = (unsigned char *)(_p);
    printf("%p", p);
    for(int i = 0; i < n; i++){
        if(i % 4 == 0) printf("\n");
        printf("%X", p[i]);
    }
    printf("\n");
}

int main(){
    cout << sizeof(Base) << endl;
    cout << sizeof(A) << endl;
    A a;
    a.x = 0xffffffffffffffff;
    a.y = 0x11111111;
    output_address(&a, sizeof(a));
    return 0;
}
