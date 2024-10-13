/*************************************************************************
	> File Name: 03.friend.cpp
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Mon 16 Sep 2024 11:05:55 AM CST
 ************************************************************************/

#include<iostream>

using namespace std;

class A{
public :
    void output(){
        cout << "CLass A : " << x << ", " << y <<endl;
    }
private:
    int x, y;
    //friend int main();
    friend class B;
};

class B{
public :
    void change(A &a){
        a.x = 100, a.y = 200;
    }
};
void test(A &a){
    return ;
}


int main(){
    A a;
    //a.x = 123, a.y = 4;
    //a.output();

    B b;
    b.change(a);
    a.output();
    return 0;
}
