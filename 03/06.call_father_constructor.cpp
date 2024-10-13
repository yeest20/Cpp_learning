/*************************************************************************
	> File Name: 06.call_father_constructor.cpp
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Sat 12 Oct 2024 01:50:41 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

class Base{
public:
    Base() : x(3){
        cout << "Base default constructor" << endl;
    }
    Base(int x) : x(x){
        cout << "Base(int x) constructor" << endl;
    } 
    Base(const Base&obj){
        this->x = obj.x;
        cout << "B copy constructor" << endl;
    }
    Base& operator=(const Base& obj){
        this->x = obj.x;
        cout << "Base=constructor" << endl;
        return *this;
    }
    int x; 
};
class A : public Base{
public:
    A() :  y(4){
        cout << "A default constructor" << endl;
    }
    A(const A&obj) : Base(obj){
        this->y = obj.y;
        cout << "A copy constructor" << endl;
    }
    A& operator=(const A &obj){
        this->y = obj.y; 
        this->Base::operator=(obj);
        cout << "A=constructor" << endl;
        return *this;
    }
    int y;
};

ostream& operator<<(ostream &out, const A &a){
    out << a.x << "," << a.y << endl;
    return out;
}

int main(){
    A a;
    cout << "a : " << a;
    a.x = 1000, a.y = 999;
    cout << endl;
    A b = a;
    cout << "b : "<< b;
    cout << endl;
    A c;
    c = a;
    cout << "c : " << c;
    return 0;
}
