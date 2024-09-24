/*************************************************************************
	> File Name: 07.initialize_list.cpp
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Mon 16 Sep 2024 01:24:47 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;
namespace test1{

class A{
public:
    A():A(1, 1){}
    A(int x, int y) : x(x), y(y){}
    void output(){
        cout << this->x << " " << this->y << endl;
        return;
    }
private:
    int x, y;
};

int main(){
    A a(3, 4), b(101, 102);
    a.output();
    b.output();
    A c;
    c.output();
    return 0;
}
}//test1

namespace test2{
class B{
public :
    B(int x) : x(x){
        cout << this <<": Class B constructor" << endl;
    }
    int x;
};

class A{
public:
    A():A(1, 1){}
    A(int z) : y(z), x(z){
        cout << "x : " << &x << endl;
        cout << "y : " << &y << endl;
    } 
    A(int x, int y) : x(x), y(y){}
    void output(){
        cout << x.x << " " << y.x << endl;
        return;
    }
private:
    B x, y; //可以在上面再构造
};
    

int main(){
    A a(5);
    a.output();
    return 0;
}

}//test2

namespace test3{
class B{
public :
    B(){
        cout << this << " default constructor" << endl;
    }
    B(int x, int y): x(x), y(y){
        cout << this <<": Class B constructor" << endl;
    }
    int x, y;
};

class A{
public:
    A():A(1, 1, 3, 4){}
    A(int x, int y, int z, int k) : x(x, y), y(z, k){
    }
    void output(){
        cout << x.x << " " << x.y << " " << y.x << " "<< y.y << endl;
        return;
    }
private:
    B x, y; //可以在上面再构造

};
int main(){
    A a(3, 4, 1, 1);
    a.output();
    return 0;
    }
}//test3

int main(){
    //test1::main(); 
    //test2::main();   
    test3::main();
    return 0;
}
