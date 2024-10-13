/*************************************************************************
	> File Name: 32.pointer_object.cpp
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Tue 17 Sep 2024 03:46:24 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

class A{
public:
    int x, y;
};



class Pointer_A{
public:
    Pointer_A(A *p) : p(p){}
    A* operator->(){return p;}
    A &operator*(){return *p;}
    A *p;
};

ostream &operator<<(ostream& out, A &a){
    out << a.x << " " << a.y;
    return out;
}

int main(){
    A a; 
    Pointer_A p = &a;
    p->x = 3;
    p->y = 4;
    cout << *p << endl;
    return 0;
}
