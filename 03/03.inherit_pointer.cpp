/*************************************************************************
	> File Name: 03.inherit_pointer.cpp
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Sat 12 Oct 2024 12:27:32 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

class Base{
public:
    Base(int x, int y) : x(x), y(y){}
    int x, y;
};

class A : public Base {
public:
    A(int x, int y, int z) : Base(x, y), z(z){}
    int z;
};

void func1(Base *p){
    cout << "Base : " << p->x << "," << p->y << endl;
    return;
}

ostream &operator<<(ostream &out, const Base &obj){
    out << "(" << obj.x << " , " << obj.y << ")" << endl;
    return out;
}


int main(){
    A a(3, 4, 5); 
    func1(&a);
    Base &b = a;
    cout << b.x << endl;
    cout << a << endl;
    return 0;
}
