/*************************************************************************
	> File Name: 25.const_methon.cpp
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Tue 17 Sep 2024 04:06:20 AM CST
 ************************************************************************/

#include<iostream>
using namespace std;

class A{
public:
    A(int x, int y): x(x), y(y), z(0){}
    void  output() const{
        cout << x << " " << y << endl;
        z += 1;
        return ;
    }
    int x, y;
    mutable int z;
};

int main(){
    const A a(3, 4); 
    a.output();
    return 0;
}
