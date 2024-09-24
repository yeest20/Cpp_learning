/*************************************************************************
	> File Name: 15.con_des_order.cpp
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Tue 17 Sep 2024 12:34:29 AM CST
 ************************************************************************/

#include<iostream> 
#include<string>
using namespace std;
namespace test1{
class A{
public:
    A(string name) : name(name){
        cout << name << " constructor" << endl;
    }
    ~A(){
        cout << name << " destructor" << endl;
    }
    string name;
};

class B{
public:
    B(A &a, string name) : a(a), name(name){
        cout << name << " constructor" << endl;
        if(a.name == "c") {
            data = new int[10];
        } else{
            data = new int();
        }
    }
    ~B(){
        if(a.name == "c"){
            cout << name << " destructor int[]" << endl;
            delete[] data;
        }else{
            cout << name << " destructor int" << endl;
            delete data;
        }
    }
private:
    string name;
    A &a;
    int *data;

};

int main(){
    A c("c"), d("d");
    B a{c, "a"}, b{d, "b"};
    A *pc = &c;
    delete pc;
    return 0;
}
}
//namespace test2


class A{
public:
    A(string name) : name(name){
        cout << name << " constructor" << endl;
    }
    ~A(){
        cout << name << " destructor" << endl;
    }
    string name;
};

class B{
public:
    B(string name) : name(name), c(name + ".c"), d(name + ".d"){
        cout <<  name << " constructor" << endl;
    }
    ~B(){
        cout << name << " destructor" << endl;
    }
private:
    string name;
    A c, d;
};

//A c("c"), d("d");

int main(){
    B b("b");
    return 0;
}





