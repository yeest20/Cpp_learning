/*************************************************************************
	> File Name: 27.operator_reload.cpp
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Tue 17 Sep 2024 04:44:47 AM CST
 ************************************************************************/

#include<iostream>
using namespace std;

class A{
public:
    A(int x, int y) : x(x), y(y){}
    void output(){
        cout << "(" << this->x << ", " << this->y << ")" << endl;
        return;
    }
    A &operator*=(int n){
        x *= n;
        y *= n;
        return *this;
    }

    int x, y;

};


A operator+(A a, A b){
    return A(a.x + b.x , a.y + b.y); 
}

ostream &operator<<(ostream &cout, const A &a){
    cout << "(" << a.x << ", " << a.y << ")" ;
    return cout; 
}
int main(){
    A a(3, 4), b(7, 10);
    A c = a + b;
    c.output();
    cout << c << " : end" << endl;
    (c *= 3) *= 4;
    cout << c << endl;
    return 0;
}
